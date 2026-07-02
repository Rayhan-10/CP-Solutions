#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    ll p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

    ll l[105], r[105];
    ll t = 0;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        t += (r[i] - l[i]) * p1;
    }

    for (int i = 0; i < n - 1; i++) {
        ll d = l[i + 1] - r[i];

        if (d <= t1) {
            t += d * p1;
        } 
        else if (d <= t1 + t2) {
            t += t1 * p1;
            t += (d - t1) * p2;
        } 
        else {
            t += t1 * p1;
            t += t2 * p2;
            t += (d - t1 - t2) * p3;
        }
    }

    cout << t << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}