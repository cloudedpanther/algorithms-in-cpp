#include <bits/stdc++.h>
using namespace std;

int n, m, a[104][104], dist[104][104];
int dy[4] = {0, 0, 1, -1}, dx[4] = {1, -1, 0, 0};
string s;

void bfs()
{
    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 1;
    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            {
                continue;
            }
            if (!a[ny][nx] || dist[ny][nx])
            {
                continue;
            }
            q.push({ny, nx});
            dist[ny][nx] = dist[y][x] + 1;
        }
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
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '1')
            {
                a[i][j] = 1;
            }
        }
    }

    bfs();
    cout << dist[n - 1][m - 1];

    return 0;
}