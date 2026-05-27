#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin>>n;
    string a, b; cin>>a>>b;
    
    vector<int> A,B;

    for (int i = 0; i < n; i++) {
        if (a[i] == '1') A.push_back(i);
        if (b[i] == '1') B.push_back(i);
    }
    if (A.size() != B.size()) {
        cout << -1 << '\n';
        return;
    }
    int ans =0;
    for (int i=0; i<A.size(); i++) {
        if (A[i] != B[i]) ans++;
    }

    cout << ans << '\n';
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