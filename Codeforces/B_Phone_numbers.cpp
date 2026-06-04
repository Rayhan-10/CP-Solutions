#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            cout << s[i] << s[i + 1];
            if (i + 2 < n) {
                cout << "-";
            }
        }
        cout << endl;
    } else {
        cout << s[0] << s[1] << s[2];
        if (n > 3) {
            cout << "-";
        }
        for (int i = 3; i < n; i += 2) {
            cout << s[i] << s[i + 1];
            if (i + 2 < n) {
                cout << "-";
            }
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}