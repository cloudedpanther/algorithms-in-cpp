#include <bits/stdc++.h>
using namespace std;

int t, n;
string clothes_name, clothes_type;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        map<string, int> m;
        int ret = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> clothes_name >> clothes_type;
            m[clothes_type]++;
        }
        for (auto c : m)
        {
            ret *= c.second + 1;
        }
        cout << ret - 1 << "\n";
    }

    return 0;
}