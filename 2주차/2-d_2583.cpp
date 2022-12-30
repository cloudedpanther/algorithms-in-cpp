#include <bits/stdc++.h>
using namespace std;

int m, n, k, xl, yl, xr, yr, a[104][104], vis[104][104];
int dy[4] = {0, 0, 1, -1}, dx[4] = {1, -1, 0, 0};
vector<int> v;

void bfs()
{
    int y, x, ny, nx;
    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] || vis[i][j])
            {
                continue;
            }

            int cnt = 0;
            q.push({i, j});
            vis[i][j] = 1;
            cnt++;
            while (!q.empty())
            {
                tie(y, x) = q.front();
                q.pop();
                for (int d = 0; d < 4; d++)
                {
                    ny = y + dy[d];
                    nx = x + dx[d];
                    if (ny < 0 || nx < 0 || ny >= m || nx >= n)
                    {
                        continue;
                    }
                    if (a[ny][nx] || vis[ny][nx])
                    {
                        continue;
                    }
                    q.push({ny, nx});
                    vis[ny][nx] = 1;
                    cnt++;
                }
            }
            v.push_back(cnt);
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> k;
    for (int t = 0; t < k; t++)
    {
        cin >> xl >> yl >> xr >> yr;
        for (int i = yl; i < yr; i++)
        {
            for (int j = xl; j < xr; j++)
            {
                a[i][j] = 1;
            }
        }
    }

    bfs();
    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    for (int s : v)
    {
        cout << s << " ";
    }

    return 0;
}