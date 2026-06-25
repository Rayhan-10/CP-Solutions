#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> f(m);
    for (int i = 0; i < m; ++i) {
        cin >> f[i];
    }

    sort(f.begin(), f.end());

    int min_diff = f[n - 1] - f[0];

    for (int i = 1; i <= m - n; ++i) {
        int current_diff = f[i + n - 1] - f[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }

    cout << min_diff << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}