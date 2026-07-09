#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll a, b;
    cin >> a >> b;

    ll c = a;
    int i = 0;

    while (c < b) {
        c = c * a;
        i++;
    }

    if (c == b) {
        cout << "YES" << endl;
        cout << i << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    while (TC--) {
        solve();
    }

    return 0;
}