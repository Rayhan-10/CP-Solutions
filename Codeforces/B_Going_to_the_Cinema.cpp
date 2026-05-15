#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int ways = 0;
    
    if (a[0] > 0) {
        ways++;
    }
    
    for (int k = 1; k < n; k++) {
        if (a[k - 1] < k && a[k] > k) {
            ways++;
        }
    }
    
    ways++;
    
    cout << ways << "\n";
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