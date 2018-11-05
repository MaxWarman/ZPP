#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int suma = 0;
    int liczba;
    for (int i = 0; i < n-1; i++)
    {
        cin >> liczba;
        suma += liczba;
    }
    cout << (long long int)n*(n+1)/2 - suma;
    return 0;
}
