#include <bits/stdc++.h>
using namespace std;

string s;
int v_cnt, v_stk, c_stk;
char prv;
bool acc;

bool is_vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> s)
    {
        if (s == "end")
        {
            break;
        }

        acc = true;
        prv = 'A';
        v_cnt = 0;
        v_stk = 0;
        c_stk = 0;

        for (char c : s)
        {
            if (prv == c && c != 'e' && c != 'o')
            {
                acc = false;
                break;
            }

            if (is_vowel(c))
            {
                v_cnt++;
                v_stk++;
                c_stk = 0;
            }
            else
            {
                c_stk++;
                v_stk = 0;
            }

            if (v_stk > 2 || c_stk > 2)
            {
                acc = false;
                break;
            }

            prv = c;
        }

        if (v_cnt == 0)
        {
            acc = false;
        }

        if (acc)
        {
            cout << "<" << s << "> is acceptable.\n";
        }
        else
        {
            cout << "<" << s << "> is not acceptable.\n";
        }
    }

    return 0;
}