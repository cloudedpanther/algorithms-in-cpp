#include <bits/stdc++.h>
using namespace std;

int a[30];
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    for (char c : s)
    {
        a[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}