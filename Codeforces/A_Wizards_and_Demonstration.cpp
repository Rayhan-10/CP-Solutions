#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int req = (n * y + 99) / 100;
    int ans = req - x;

    if (ans < 0) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}