#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin>>n;
    int count=0;
    while(n > 0)
    {
        int digit=n%10;
        
        if(digit == 4 || digit == 7)
        {
            count++;
        }
        n=n/10;
    }
    if(count ==4 || count == 7)
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

    // int TC;
    // cin >> TC;
    // while (TC--) {
        solve();
    // }

    return 0;
}