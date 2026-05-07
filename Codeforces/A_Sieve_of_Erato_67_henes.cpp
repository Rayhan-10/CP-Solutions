#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    bool flag = false;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x == 67) {
            flag = true;
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";
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