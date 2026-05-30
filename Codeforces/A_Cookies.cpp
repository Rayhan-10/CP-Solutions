#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int total_sum = 0;
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
        if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    int ans = 0;
    if (total_sum % 2 == 0) {
        ans = even_count;
    } else {
        ans = odd_count;
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