#include <bits/stdc++.h>
using namespace std;

int n, title = 666;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    while (n > 0)
    {
        if (to_string(title).find("666") != string::npos)
        {
            n--;
        }
        title++;
    }

    cout << title - 1;

    return 0;
}