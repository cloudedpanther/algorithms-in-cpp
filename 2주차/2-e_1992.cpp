#include <bits/stdc++.h>
using namespace std;

int n;
string tmp, a[70][70];

string go(int y, int x, int n)
{
    if (n == 1)
    {
        return a[y][x];
    }

    int nextN = n / 2;
    string ul, ur, dl, dr;
    ul = go(y, x, nextN);
    ur = go(y, x + nextN, nextN);
    dl = go(y + nextN, x, nextN);
    dr = go(y + nextN, x + nextN, nextN);

    if (ul == "0" && ur == "0" && dl == "0" && dr == "0")
    {
        return "0";
    }
    if (ul == "1" && ur == "1" && dl == "1" && dr == "1")
    {
        return "1";
    }

    return "(" + ul + ur + dl + dr + ")";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        for (int j = 0; j < n; j++)
        {
            a[i][j] = tmp[j];
        }
    }

    cout << go(0, 0, n);

    return 0;
}