#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s = "codeforces";
    char c;
    cin>>c;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--)
    {
        solve();
    }

    return 0;
}