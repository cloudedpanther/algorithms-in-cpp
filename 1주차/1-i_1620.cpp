#include <bits/stdc++.h>
using namespace std;

int n, m;
string s, poke_index[100004];
map<string, int> poke_map;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        poke_index[i] = s;
        poke_map.insert({s, i});
    }

    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (!poke_map[s])
        {
            cout << poke_index[stoi(s)] << "\n";
        }
        else
        {
            cout << poke_map[s] << "\n";
        }
    }
    return 0;
}