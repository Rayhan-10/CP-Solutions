#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s = "Timur";
    sort(s.begin(), s.end());
    int n;
    cin >> n;
    vector<char> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    string t(ar.begin(), ar.end()); 
    sort(t.begin(), t.end());   
    if (s == t)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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