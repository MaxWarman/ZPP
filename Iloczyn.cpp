#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int z;
    cin >> z;
    int n[z];
    int najwiekszyIloczyn[z];
    for(int j = 0; j < z; j++)
    {
        cin >> n[j];

        int tab[n[j]];
        for(int i = 0; i < n[j]; i++)
        {
            cin >> tab[i];
        }

        sort(tab, tab + n[j]);
        if(tab[n[j]-1] * tab[n[j]-2] * tab[n[j]-3] >= tab[0] * tab[1] * tab[n[j]-1])
        {
            najwiekszyIloczyn[j] = tab[n[j]-1] * tab[n[j]-2] * tab[n[j]-3];
        }
        else
        {
            najwiekszyIloczyn[j] = tab[0] * tab[1] * tab[n[j]-1];
        }
    }

    for(int i = 0; i < z; i++)
    {
        cout << najwiekszyIloczyn[i] << endl;
    }


    return 0;
}
