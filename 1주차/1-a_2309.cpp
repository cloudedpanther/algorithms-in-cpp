#include <bits/stdc++.h>
using namespace std;

int h[10];
int sum;
bool check[10];
vector<int> v, a;

bool combi(int start, int opp)
{
    if (opp == 0)
    {
        int ex = 0;
        for (int e : v)
        {
            ex += h[e];
        }
        if (sum - ex == 100)
        {
            return true;
        }
        return false;
    }
    for (int i = start; i < 9; i++)
    {
        if (check[i])
            continue;
        check[i] = true;
        v.push_back(i);
        if (combi(i + 1, opp - 1))
        {
            return true;
        }
        check[i] = false;
        v.pop_back();
    }
    return false;
}

int main()
{
    for (int i = 0; i < 9; i++)
    {
        cin >> h[i];
        sum += h[i];
    }
    combi(0, 2);
    for (int i = 0; i < 9; i++)
    {
        if (check[i])
            continue;
        a.push_back(h[i]);
    }
    sort(a.begin(), a.end());
    for (int ans : a)
    {
        cout << ans << "\n";
    }
    return 0;
}