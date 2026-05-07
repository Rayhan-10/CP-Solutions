#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ar[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>ar[i][j];
        }
    }
    int ans=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(ar[i][j] == 1)
            {
                ans = abs(2-i)+ abs(2-j);
                break;
            }
        }
    }
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