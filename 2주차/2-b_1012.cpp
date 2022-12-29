#include <bits/stdc++.h>
using namespace std;

int t, m, n, k, a[54][54], vis[54][54], tx, ty;
int dy[4] = {0, 0, 1, -1}, dx[4] = {1, -1, 0, 0};

int bfs()
{
    int y, x, ny, nx, cnt = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!a[i][j] || vis[i][j])
            {
                continue;
            }

            q.push({i, j});
            vis[i][j] = 1;
            while (!q.empty())
            {
                tie(y, x) = q.front();
                q.pop();
                for (int d = 0; d < 4; d++)
                {
                    ny = y + dy[d];
                    nx = x + dx[d];
                    if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                    {
                        continue;
                    }
                    if (!a[ny][nx] || vis[ny][nx])
                    {
                        continue;
                    }
                    q.push({ny, nx});
                    vis[ny][nx] = 1;
                }
            }
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n >> k;
        memset(a, 0, sizeof(a));
        memset(vis, 0, sizeof(vis));
        for (int j = 0; j < k; j++)
        {
            cin >> tx >> ty;
            a[ty][tx] = 1;
        }
        cout << bfs() << "\n";
    }

    return 0;
}