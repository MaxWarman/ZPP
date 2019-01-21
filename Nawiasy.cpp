/*      ASCII brackets
*   ( - 40,  ) - 41
*   [ - 91,  ] - 93
*   { - 123, } - 125
*/
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string brackets;
    for(int j = 0; j < n; j++)
    {
        cin >> brackets;
        vector<char> open;
        bool is_correct = true;
        for(int i = 0; i < brackets.size(); i++)
        {
            switch(brackets[i])
            {
            case '(':
            case '[':
            case '{':
                open.push_back(brackets[i]);
                break;
            case ')':
            case ']':
            case '}':
                if(open.size() == 0)
                {
                    is_correct = false;
                    break;
                }
                if(brackets[i] - 1 == open[open.size()-1]
                || brackets[i] - 2 == open[open.size()-1])
                {
                    open.pop_back();
                }
                else
                {
                    is_correct = false;
                }
                break;

            }
            if(i == brackets.size()-1 && open.size() > 0)
            {
                is_correct = false;
            }
        }
        if(is_correct)
            {
                cout << "TAK" << endl;
            }
            else
            {
                cout << "NIE" << endl;
            }
    }
    return 0;
}
