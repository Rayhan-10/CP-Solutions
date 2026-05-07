// https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int sp = 0, dp = 0, turn = 1;
    while (ar.size() != 0)
    {
        if (turn % 2 == 1)
        {
            if ((ar.front() < ar.back()))
            {
                sp += ar.back();
                ar.pop_back();
            }
            else
            {
                sp += ar.front();
                ar.erase(ar.begin());
            }
        }
        else
        {
            if ((ar.front() < ar.back()))
            {
                dp += ar.back();
                ar.pop_back();
            }
            else
            {
                dp += ar.front();
                ar.erase(ar.begin());
            }
        }
        turn++;
    }
    cout << sp << " " << dp << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
    solve();
    // }

    return 0;
}