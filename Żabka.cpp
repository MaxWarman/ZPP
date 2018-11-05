#include<iostream>

using namespace std;

int main()
{
    int x,y,s;
    cin >> x >> y >> s;

    int wynik = 0;
    /*if(y-x % s == 0)
    {
        wynik = (y-x)/s;
    }
    else
    {
        wynik = (y-x)/s + 1;
    }*/
    wynik = (y-x-1)/s + 1;
    cout << wynik;

    // sztuczka z y-x-1, a pod koniec dodajemy 1
    return 0;
}
