#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s, t;
    cin>>s>>t;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        if((s[i] == t[i] )|| (s[i] == 'G' && t[i] == 'B') || (s[i] == 'B' && t[i] == 'G'))
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--) {
        solve();
    }

    return 0;
}