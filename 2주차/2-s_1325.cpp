#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, mx;
bool vis[10004];
vector<int> v[100004];
vector<int> ret;

int bfs(int num)
{
    int cnt = 0;
    memset(vis, false, sizeof(vis));
    queue<int> q;
    q.push(num);
    vis[num] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        cnt++;
        for (int next : v[cur])
        {
            if (vis[next])
                continue;
            q.push(next);
            vis[next] = true;
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        int cnt = bfs(i);
        if (cnt < mx)
        {
            continue;
        }
        if (cnt > mx)
        {
            ret.clear();
            mx = cnt;
        }
        ret.push_back(i);
    }

    sort(ret.begin(), ret.end());

    for (int num : ret)
    {
        cout << num << " ";
    }

    return 0;
}