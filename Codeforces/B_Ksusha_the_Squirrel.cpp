#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int c = 0;
    bool flag = true;

    for (int i = 0; i < n; i++) {
        if (s[i] == '#') {
            c++;
            if (c >= k) {
                flag = false;
                break;
            }
        } else {
            c = 0;
        }
    }

    if (flag) {
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