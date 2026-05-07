#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mxd = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            count++;
        if (s[i] == '#')
        {
            mxd = max(mxd, count);
            count = 0;
        }
    }
    mxd = max(mxd, count);
    if(mxd >= 3)
    {
        cout<<2<<endl;
    }
    else{
        int count=0;
        for(int i = 0; i < n; i++){
          if (s[i] == '.')
            count++;  
        }
        cout<<count<<endl;
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