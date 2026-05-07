#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;

    cout << 1 << " "; 

    for(int i = 2; i <= n; i++){
        cout << (ll)i * (i - 1);
        if(i != n) cout << " ";
    }

    cout << endl;
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