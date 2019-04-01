#include <iostream>
using namespace std;

int main()
{
    long long int n;
    long long int currWeight;
    long long int lastWeight = 0;
    long long int maxWeightLoss = 0;
    long long int currWeightLoss = 0;
    cin >> n;

    cin >> currWeight;
    lastWeight = currWeight;
    for(long long int i = 1; i < n; i++)
    {
        cin >> currWeight;

        if(currWeight > lastWeight)
        {
            maxWeightLoss = currWeightLoss;
            currWeightLoss = 0;
        }
        else
        {
            currWeightLoss += (lastWeight - currWeight);
        }

        lastWeight = currWeight;
    }

    if(currWeightLoss > maxWeightLoss)
    {
        maxWeightLoss = currWeightLoss;
    }

    cout << maxWeightLoss << endl;
    return 0;
}
