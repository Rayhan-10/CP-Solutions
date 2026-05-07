#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int mCount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            int p;
            cin >> p;
            if (p == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            mCount++;
        }
    }
    cout<<mCount<<"\n";
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