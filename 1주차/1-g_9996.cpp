#include <bits/stdc++.h>
using namespace std;

int n, fs, bs;
string p, s, f, b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> p;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == '*')
        {
            f = p.substr(0, i);
            b = p.substr(i + 1);
            fs = f.size();
            bs = b.size();
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.size() < fs + bs || s.substr(0, fs) != f || s.substr(s.size() - bs) != b)
        {
            cout << "NE\n";
        }
        else
        {
            cout << "DA\n";
        }
    }

    return 0;
}