#include <bits/stdc++.h>
using namespace std;

int n, cnt;
string s;
vector<char> stk;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (char c : s)
        {
            if (stk.empty() || stk.back() != c)
            {
                stk.push_back(c);
            }
            else
            {
                stk.pop_back();
            }
        }
        if (stk.empty())
            cnt++;
        stk.clear();
    }

    cout << cnt;

    return 0;
}