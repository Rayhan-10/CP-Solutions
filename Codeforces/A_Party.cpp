#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> count(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> count[i];
    }

    int mx = 0;

    for (int i = 1; i <= n; i++) {
        int dpt = 0;
        int cnt = i;

        while (cnt != -1) {
            dpt++;
            cnt = count[cnt];
        }

        mx = max(mx, dpt);
    }

    cout << mx << endl;
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