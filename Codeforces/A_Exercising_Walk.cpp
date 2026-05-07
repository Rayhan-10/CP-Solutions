#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    long long final_x = x - a + b;
    long long final_y = y - c + d;

    if (final_x >= x1 && final_x <= x2 && final_y >= y1 && final_y <= y2) {
        if (a + b > 0 && x1 == x2) {
            cout << "NO" << endl;
        } else if (c + d > 0 && y1 == y2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}