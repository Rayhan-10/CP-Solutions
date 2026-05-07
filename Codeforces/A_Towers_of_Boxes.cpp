#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, d;
        cin >> n >> m >> d;
        int h = (d / m) + 1;
        int ans = n / h;
        if (n % h != 0) {
            ans+=1;
        }

        cout << ans << endl;
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