#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int wskaznikPrzycisku[n];

    for(int i = 0; i < n; i++)
    {
        wskaznikPrzycisku[i] = 0;
    }

    int nrPrzycisku;
    int najwieksza = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> nrPrzycisku;
        if(nrPrzycisku == n+1)
        {
            for(int j = 0; j < n; j++)
            {
                wskaznikPrzycisku[j] = najwieksza;
            }
        }
        else
        {
            nrPrzycisku--;
            wskaznikPrzycisku[nrPrzycisku]++;
            if(wskaznikPrzycisku[nrPrzycisku] > najwieksza)
            {
                najwieksza = wskaznikPrzycisku[nrPrzycisku];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << wskaznikPrzycisku[i] << " ";
    }
    return 0;
}
