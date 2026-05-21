#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    int pass_sum = n * 3;

    if (pass_sum <= k) {
        cout << 0 << endl;
    } else {
        cout << pass_sum - k << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}