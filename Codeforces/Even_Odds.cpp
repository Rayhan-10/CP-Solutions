#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long t = (n + 1) / 2;

    if (k <= t)
    {
        cout << 1 + (k - 1) * 2 << "\n";
    }
    else
    {
        cout << 2 + (k - t - 1) * 2 << "\n";
    }
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