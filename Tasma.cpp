#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int liczba[n];
    for(int i = 0; i < n; i++)
    {
        cin >> liczba[i];
    }

    long long int suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += liczba[i];
    }

    int indexPrzeciecia = 0;
    long long int malaSuma = 0;
    for(int i = 0; i < n; i++)
    {
        malaSuma += liczba[i];
        if(malaSuma >= suma/2)
        {
            indexPrzeciecia = i+1;
            break;
        }
    }

    malaSuma = 0;
    for(int i = 0; i < indexPrzeciecia; i++)
    {
        malaSuma += liczba[i];
    }

    suma -= 1000 * n;
    malaSuma -= 1000 * indexPrzeciecia;

    long long int wartBezwl = suma - 2 * malaSuma;
    cout << suma << endl;
    cout << malaSuma << endl;
    cout << wartBezwl;

    return 0;
}
