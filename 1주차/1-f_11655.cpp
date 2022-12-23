#include <bits/stdc++.h>
using namespace std;

string s, ret;

int main()
{
    getline(cin, s);

    for (char c : s)
    {
        if ('a' <= c && c <= 'z')
        {
            if (c + 13 > 'z')
            {
                ret += char(c - 13);
            }
            else
            {
                ret += char(c + 13);
            }
        }
        else if ('A' <= c && c <= 'Z')
        {
            if (c + 13 > 'Z')
            {
                ret += char(c - 13);
            }
            else
            {
                ret += char(c + 13);
            }
        }
        else
        {
            ret += c;
        }
    }

    cout << ret;

    return 0;
}