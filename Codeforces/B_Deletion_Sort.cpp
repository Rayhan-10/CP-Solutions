#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    if (a.size() == 1)
    {
        cout << 1 << "\n";
    }
    else
    {
        bool flag= true;
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] > a[i + 1])
            {
                flag=false;
                break;
                
            }
        }
        if(flag == true) cout<<n<<"\n";
        else cout << 1 << "\n";
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