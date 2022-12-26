#include <bits/stdc++.h>
using namespace std;

int n, m, a[15004], sum, ret;

void combi(int r, int start, int depth)
{
    if (depth == r)
    {
        if (sum == m)
        {
            ret++;
        }
        return;
    }

    for (int i = start; i < n; i++)
    {
        sum += a[i];
        combi(r, i + 1, depth + 1);
        sum -= a[i];
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    combi(2, 0, 0);

    cout << ret;
    return 0;
}