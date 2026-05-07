#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    int mn=INT_MAX;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        mn=min(mn,abs(a));

    }
    cout<<mn<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}