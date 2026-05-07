#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long n, w;
    cin >> n >> w;

    long long rb = n - (n / w);
    cout << rb << endl;
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