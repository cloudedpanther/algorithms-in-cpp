#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
ll c, tmp;
map<ll, int> app, fr;
vector<ll> v;

bool compare(ll a, ll b)
{
    if (fr[a] == fr[b])
    {
        return app[a] < app[b];
    }
    return fr[a] > fr[b];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        if (app[tmp] == 0)
        {
            app[tmp] = i;
            fr[tmp] = 1;
        }
        else
        {
            fr[tmp]++;
        }
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), compare);

    for (ll num : v)
    {
        cout << num << " ";
    }

    return 0;
}