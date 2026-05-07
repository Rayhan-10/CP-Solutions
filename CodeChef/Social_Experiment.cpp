#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans;
    cin >> n;
    if (n < 4)
    {
        cout << n << endl;
    }
    else
    {

        cout << n % 2 << endl;
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