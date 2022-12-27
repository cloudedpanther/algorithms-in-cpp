#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, c;

ll go(int num, int cnt)
{
    if (cnt == 1)
    {
        return num % c;
    }

    ll ret = go(num, cnt / 2);
    ret = (ret * ret) % c;
    if (cnt % 2)
    {
        ret = (ret * num) % c;
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;

    cout << go(a, b);

    return 0;
}