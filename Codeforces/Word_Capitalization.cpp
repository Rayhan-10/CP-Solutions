#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }
    cout<<s<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--)
    // {
        solve();
    // }

    return 0;
}