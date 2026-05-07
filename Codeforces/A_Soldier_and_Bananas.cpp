#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k,n,w; cin>>k>>n>>w;
    int m=k*((w*(w+1))/2);
    cout<<max(0, m-n)<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  
        solve();
    

    return 0;
}