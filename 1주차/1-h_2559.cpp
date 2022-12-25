#include <bits/stdc++.h>
using namespace std;

int n, k, a[200004], tmp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            a[i] += a[i - 1];
        }
    }

    int ret = a[k - 1];
    for (int i = k; i < n; i++)
    {
        ret = max(ret, a[i] - a[i - k]);
    }

    cout << ret;

    return 0;
}