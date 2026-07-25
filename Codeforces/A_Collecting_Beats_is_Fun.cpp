#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int k;
    cin >> k;

    vector<int> count(10, 0);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char c;
            cin >> c;
            if (c >= '1' && c <= '9') {
                count[c - '0']++;
            }
        }
    }

    bool p = true;
    for (int i = 1; i <= 9; i++) {
        if (count[i] > 2 * k) {
            p = false;
            break;
        }
    }

    if (p) {
        cout << "YES" << endl;
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