#include <bits/stdc++.h>
using namespace std;

int n, alph[30];
string s, ret;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        alph[s[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alph[i] > 4)
        {
            ret += char('a' + i);
        }
    }

    if (ret.size() == 0)
    {
        cout << "PREDAJA";
    }
    else
    {
        cout << ret;
    }

    return 0;
}