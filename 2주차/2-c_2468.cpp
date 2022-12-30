#include <bits/stdc++.h>
using namespace std;

int n, a[104][104], ret = 1, mx, vis[104][104];
int dy[4] = {0, 0, 1, -1}, dx[4] = {1, -1, 0, 0};

void bfs(int y0, int x0, int r)
{
    int y, x, ny, nx;
    queue<pair<int, int>> q;
    q.push({y0, x0});
    vis[y0][x0] = 1;
    while (!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            ny = y + dy[i];
            nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            {
                continue;
            }
            if (a[ny][nx] - r < 1 || vis[ny][nx])
            {
                continue;
            }
            q.push({ny, nx});
            vis[ny][nx] = 1;
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }
    }

    for (int r = 1; r < mx; r++)
    {
        int cnt = 0;
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] - r < 1 || vis[i][j])
                {
                    continue;
                }
                bfs(i, j, r);
                cnt++;
            }
        }
        ret = max(ret, cnt);
    }

    cout << ret;
    return 0;
}