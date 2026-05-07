#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << "NO\n";
        return;
    }
    int i = 0, j = i + 1;
    while (i < n)
    {
        if (s[i] == s[j])
        {
            s.erase(i, 2);
            i = 0;
            j = i + 1;
        }
        else
        {
            i++;
            j++;
        }
    }
    if (s.size() != 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
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