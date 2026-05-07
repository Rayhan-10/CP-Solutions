#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = 0; int v;
    if (k > 0 && k <= n)
    {
        v = ar[k - 1];
    }
    else
    {
        cout << 0 << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (ar[i] >= v && ar[i] > 0)
        {
            ans++;
        }
    }
    cout << ans << "\n";
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