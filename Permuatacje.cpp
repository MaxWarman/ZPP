#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int liczby[n+1];
    int index;
    bool jestPermutacja = true;
    for(int i = 0; i <= n; i++)
    {
        liczby[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        cin >> index;
        if(index > n)
        {
            cout << "NIE" << endl;
            return 0;
        }
        liczby[index]++;
    }

    for(int i = 0; i <= n; i++)
    {
        if(liczby[i] != 0 && liczby[i] != 1)
        {
            jestPermutacja = false;
            break;
        }
    }

    if(jestPermutacja == true)
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }
    return 0;
}
