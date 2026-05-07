#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    if (n % 4 == 0) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
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