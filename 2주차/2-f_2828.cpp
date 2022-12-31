#include <bits/stdc++.h>
using namespace std;

int n, m, j, l, r, cnt, pos, dist;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> j;
    l = 0;
    r = l + m;
    for (int i = 0; i < j; i++)
    {
        cin >> pos;
        if (r < pos)
        {
            dist = pos - r;
            l += dist;
            r += dist;
            cnt += dist;
        }
        else if (pos <= l)
        {
            dist = l - pos + 1;
            l -= dist;
            r -= dist;
            cnt += dist;
        }
    }

    cout << cnt;

    return 0;
}