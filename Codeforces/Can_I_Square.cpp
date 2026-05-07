// https://codeforces.com/problemset/problem/1915/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int x;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        long long div = round(sqrt(sum));

        if (div * div == sum )
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}