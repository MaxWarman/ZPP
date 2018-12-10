#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int domekX[n];
    int domekY[n];
    for(int i = 0; i < n; i++)
    {
        cin >> domekX[i] >> domekY[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << domek[i][0] << " " << domek[i][1] << endl;
    }

    return 0;
}
