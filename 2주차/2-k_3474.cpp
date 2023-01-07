#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t;
ll n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        int zeros = 0;
        while (n >= 5)
        {
            zeros += n / 5;
            n /= 5;
        }
        cout << zeros << "\n";
    }

    return 0;
}