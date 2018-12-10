#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int wysGwozdzi[n];
    for(int i = 0; i < n; i++)
    {
        cin >> wysGwozdzi[i];
    }
    sort(wysGwozdzi, wysGwozdzi + n);

    int ile = 1;
    int maksymalnaIlosc = 0;
    for(int i = 1; i < n-k+1; i++)
    {
        if(wysGwozdzi[i] != wysGwozdzi[i-1])
        {
            if(ile > maksymalnaIlosc)
            {
                maksymalnaIlosc = ile;
            }
            ile = 1;
        }
        else
        {
            ile++;
        }
    }

    cout << min(n,maksymalnaIlosc + k);
    return 0;
}
