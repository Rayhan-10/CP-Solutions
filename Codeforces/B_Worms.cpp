#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> pref(n);
    int current_sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        current_sum += a;
        pref[i] = current_sum;
    }

    int m;
    cin >> m;

    while (m--) {
        int q;
        cin >> q;

        auto it = lower_bound(pref.begin(), pref.end(), q);
        int pile_index = (it - pref.begin()) + 1;

        cout << pile_index << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}