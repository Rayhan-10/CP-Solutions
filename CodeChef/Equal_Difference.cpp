#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        a[s - i]++;
    }

    int ans = 0;
    for (auto it : a)
    {
        int k = it.second;
        ans += (k * (k - 1)) / 2;
    }
    cout << ans << endl;
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