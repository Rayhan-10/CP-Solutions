#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }

    int t[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            t[i][j] = a[i][j];
            if (i > 0) t[i][j] += a[i - 1][j];
            if (i < 2) t[i][j] += a[i + 1][j];
            if (j > 0) t[i][j] += a[i][j - 1];
            if (j < 2) t[i][j] += a[i][j + 1];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (t[i][j] % 2 == 0) {
                cout << 1;
            } else {
                cout << 0;
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