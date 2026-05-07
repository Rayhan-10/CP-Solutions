#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    int i=0, j=1,count=1;
    while(i <= n-2)
    {
        if(ar[i] == ar[j])
        {
            count++;
            if(count>= 3)
            {
                cout<<ar[i]<<"\n";
                return;
            }
        }
        else
        {
            count=1;
        }
        i++;
        j++;
    }
    cout<<"-1"<<"\n";
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