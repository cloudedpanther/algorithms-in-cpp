#include <bits/stdc++.h>
using namespace std;

int n, team, m, s, score[104];
int w1, w2, goal_time[104];
string time_input;

string format(int total_seconds)
{
    string minutes = to_string(total_seconds / 60);
    string seconds = to_string(total_seconds % 60);
    if (minutes.size() < 2)
    {
        minutes = "0" + minutes;
    }
    if (seconds.size() < 2)
    {
        seconds = "0" + seconds;
    }
    return minutes + ":" + seconds;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> team >> time_input;
        m = stoi(time_input.substr(0, 2));
        s = stoi(time_input.substr(3, 5));
        goal_time[i] = m * 60 + s;
        if (team == 1)
        {
            score[i] = score[i - 1] + 1;
        }
        else
        {
            score[i] = score[i - 1] - 1;
        }

        if (score[i - 1] > 0)
        {
            w1 += goal_time[i] - goal_time[i - 1];
        }
        else if (score[i - 1] < 0)
        {
            w2 += goal_time[i] - goal_time[i - 1];
        }
    }

    if (score[n] > 0)
    {
        w1 += 48 * 60 - goal_time[n];
    }
    else if (score[n] < 0)
    {
        w2 += 48 * 60 - goal_time[n];
    }

    cout << format(w1);
    cout << "\n";
    cout << format(w2);

    return 0;
}