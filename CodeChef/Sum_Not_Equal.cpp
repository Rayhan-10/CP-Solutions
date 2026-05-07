#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
       int n; cin >> n;
    vector<pair<int,int>> a(n); 
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i] = {x, i+1}; 
    }

    sort(a.begin(), a.end()); 

    if(a[0].first == a[n-1].first) {
        cout << -1 << "\n"; 
        return;
    }
    cout << a[0].second << " " << a[1].second << " " << a[n-1].second << "\n";
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