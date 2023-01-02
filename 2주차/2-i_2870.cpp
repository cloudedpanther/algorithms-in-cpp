#include <bits/stdc++.h>
using namespace std;

int n, tmp;
string s, num;
vector<string> v;

bool compare(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    return a.size() < b.size();
}

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
            if ('0' <= c && c <= '9')
            {
                if (num == "0")
                {
                    num = c;
                }
                else
                {
                    num += c;
                }
            }
            else if (num != "")
            {
                v.push_back(num);
                num = "";
            }
        }

        if (num != "")
        {
            v.push_back(num);
            num = "";
        }
    }

    sort(v.begin(), v.end(), compare);

    for (string ret : v)
    {
        cout << ret << "\n";
    }

    return 0;
}