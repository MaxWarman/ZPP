#include <iostream>
using namespace std;

// OBMYSLEC

int main()
{
    int n;
    cin >> n;
    long long int ceny[n];
    int total_cost = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> ceny[i];
    }

    int start_index = 0;
    int lowest_index = 0;

    while(start_index < n-1)
    {
        int lowest = ceny[start_index];
        for(int i = start_index + 1; i < n; i++)
        {
            if(ceny[i] < lowest)
            {
                lowest = ceny[i];
                lowest_index = i;
            }
        }
        total_cost += ((lowest_index - start_index + 1) * lowest);
        start_index = lowest_index;
    }


    cout << total_cost << endl;
    return 0;
}
