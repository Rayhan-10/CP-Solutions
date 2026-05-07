#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int year = 0;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        year++;
    }

    cout << year << "\n";
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