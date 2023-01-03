#include <bits/stdc++.h>
using namespace std;

int h, w, a[104][104], y, x;
string tmp;
queue<pair<int, int>> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        cin >> tmp;
        for (int j = 0; j < w; j++)
        {
            if (tmp[j] == 'c')
            {
                a[i][j] = 1;
                q.push({i, j});
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }

    while (!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();
        if (x + 1 >= w || a[y][x + 1] > 0)
        {
            continue;
        }
        q.push({y, x + 1});
        a[y][x + 1] = a[y][x] + 1;
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << a[i][j] - 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}