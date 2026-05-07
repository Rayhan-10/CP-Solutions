#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> ar(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> ar[i];
    }

    sort(ar.begin(), ar.end());

    long long score = 0;
    for (int i = 0; i < 2 * n; i += 2) {
        score += ar[i];
    }

    cout << score << "\n";
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
