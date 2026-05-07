#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        sum += x;
    }

    cout << sum / n << endl;
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