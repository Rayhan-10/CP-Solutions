#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int payment=0;
    if( n >= 200)
    {
        payment=n-50;
        cout<<payment<<"\n";
    }
    else
    {
        cout<<n<<"\n";
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