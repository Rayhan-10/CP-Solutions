#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size())
    {
        cout << "NO\n";
    }
    else
    {
        int start = 0, end = t.size() - 1;
        bool flag = true;
        while (start != s.size())
        {
            if (s[start] != t[end])
            {
                flag = false;
                break;
            }
            start++;
            end--;
        }
        if (flag == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
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