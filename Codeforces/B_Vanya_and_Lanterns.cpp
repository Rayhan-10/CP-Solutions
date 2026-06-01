#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    ll l;
    cin >> n >> l;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll max_diff = 0;
    for (int i = 0; i < n - 1; i++) {
        max_diff = max(max_diff, a[i + 1] - a[i]);
    }

    double ans = (double)max_diff / 2.0;

    double start_gap = (double)a[0];
    double end_gap = (double)(l - a[n - 1]);

    ans = max({ans, start_gap, end_gap});

    cout << fixed << setprecision(10) << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}