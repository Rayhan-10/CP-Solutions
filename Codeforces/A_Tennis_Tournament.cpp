#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int tm = 0;
    int cm = n;

    while (cm > 1) {
        int k = 1;
        while (k * 2 <= cm) {
            k *= 2;
        }
        tm += k / 2;
        cm = (k / 2) + (cm - k);
    }

    int bottles = tm * (2 * a + 1);
    int towels = n * b;

    cout << bottles << " " << towels << endl;
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