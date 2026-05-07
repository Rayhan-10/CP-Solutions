#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long ans = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout<<ans<<"\n";
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