#include <bits/stdc++.h>
using namespace std;

int cost[8];
int arr, lev;
int trucks[104];
int ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 3; i++)
    {
        cin >> cost[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> arr >> lev;

        for (int j = arr; j < lev; j++)
        {
            trucks[j]++;
        }
    }

    for (int cnt : trucks)
    {
        ret += cost[cnt] * cnt;
    }

    cout << ret;

    return 0;
}