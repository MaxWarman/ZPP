#include <iostream>
using namespace std;

int main()
{
    long long int n;
    long long int rCount = 0;
    long long int lCount = 0;
    long long int pairCount = 0;

    cin >> n;
    long long int cars[n];
    for(long long int i = n-1; i >= 0; i--)
    {
        cin >> cars[i];
        if(cars[i] == 0)
        {
            rCount++;
        }
    }

    for(long long int i = 0; i < n; i++)
    {
        if (cars[i] == 1)
        {
            lCount++;
        }
        if(cars[i] == 0)
        {
            pairCount += rCount * lCount;
            rCount--;
            lCount = 0;
        }
    }
    cout << pairCount << endl;
    return 0;
}
