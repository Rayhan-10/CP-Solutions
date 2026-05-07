#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]-'0' == 1)
        {
            sum+=a1;
        }
       else if(s[i]-'0' == 2)
        {
            sum+=a2;
        }
        else if(s[i]-'0' == 3)
        {
            sum+=a3;
        }
        else
        {
            sum+=a4;
        }
    }
    cout<<sum<<"\n";    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
        solve();
    // }

    return 0;
}