#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string s = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] + s < s + a[i]) {
            s = a[i] + s;
        } else {
            s = s + a[i];
        }
    }

    cout << s << '\n';
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
