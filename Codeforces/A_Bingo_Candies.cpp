#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    unordered_map <int ,int> a;
    int mx = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x; cin>>x;
            a[x]++;
            mx= max(mx, a[x]);
        }
    }
    
    
    if(mx > (n*(n-1))) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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