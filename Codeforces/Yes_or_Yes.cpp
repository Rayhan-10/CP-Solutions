#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string st = "yes";
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.size(); i++)
    {
        s[i]= tolower(s[i]);
    }
    if(s == st)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
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