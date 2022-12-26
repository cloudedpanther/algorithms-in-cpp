#include <bits/stdc++.h>
using namespace std;

int a[30];
string s, l, m, r;
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    for (char c : s)
    {
        a[c - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2)
        {
            m += char('A' + i);
        }
        for (int j = 0; j < a[i] / 2; j++)
        {

            l += char('A' + i);
        }
    }

    if (m.size() > 1)
    {
        cout << "I'm Sorry Hansoo";
    }
    else
    {
        r = l;
        reverse(r.begin(), r.end());

        cout << l + m + r;
    }

    return 0;
}