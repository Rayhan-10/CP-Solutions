#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string s;
    if (!(cin >> s)) return;

    bool is_magic = true;
    int n = s.length();

    for (int i = 0; i < n; ) {
        if (i + 2 < n && s.substr(i, 3) == "144") {
            i += 3;
        } else if (i + 1 < n && s.substr(i, 2) == "14") {
            i += 2;
        } else if (s[i] == '1') {
            i += 1;
        } else {
            is_magic = false;
            break;
        }
    }

    if (is_magic) {
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