#include <bits/stdc++.h>
using namespace std;

string s;
int lastIndex;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    lastIndex = s.size() - 1;
    for (int i = 0; i <= lastIndex / 2; i++)
    {
        if (s[i] != s[lastIndex - i])
        {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
    return 0;
}