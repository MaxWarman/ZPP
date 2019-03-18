#include <iostream>
using namespace std;

int main()
{
    long long int p;
    cin >> p;
    long long int smallestObw = 100000000000;

    for(int i = 1; i * i <= p; i++)
    {
        if(p%i == 0)
        {
            long long int obw = 2*(i + (p/i));
            if(obw < smallestObw || i == 1)
            {
                smallestObw = obw;
            }
            else
            {
                break;
            }
        }
    }
    cout << smallestObw << endl;
    return 0;
}
