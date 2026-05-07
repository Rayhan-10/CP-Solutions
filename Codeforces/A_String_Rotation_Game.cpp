#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    bool flag = true;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << 1 << endl;
        return;
    }
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