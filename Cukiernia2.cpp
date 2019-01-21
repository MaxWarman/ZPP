#include <iostream>
using namespace std;

int main()
{
 int n;
    cin >> n;
    long long int ceny[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ceny[i];
    }
    int total_cost = ceny[n-1];
    int low_cena = ceny[n-1];

    for(int i = n-2; i > 0; i++;)
    {
        if(ceny[i] < ceny[i-1])
        {
            total_cost += ceny[i];
        }

    }

    return 0;
}
