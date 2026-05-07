#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    ll y=INT_MAX;
    for(int i = 0; i < n; i++){
        int a,b; cin>>a>>b;
        if(y<a)
        {
            y=a;
        }
       else if(y > b)
        {
            y=b;
        }
        else
        {
            y=y;
        }
        
    }
    cout<<y<<endl;
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