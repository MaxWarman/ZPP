#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int liscie[m + 1];
    for(int i = 0; i <= m; i++)
    {
        liscie[i] = 0;
    }

    int sumaLisci = m;
    int index;
    int counter = 0;

    for(int i = 0; i < m; i++)
    {
        cin >> index;
        liscie[index]++;
        sumaLisci--;
        if(sumaLisci == 0)
        {
            counter = i;
            break;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        if(liscie[i] == 0)
        {
            cout << "-1";
            return 0;
        }
    }
    cout << counter;
    return 0;
}
