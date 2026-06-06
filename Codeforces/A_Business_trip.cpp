#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int k;
    cin >> k;

    vector<int> a(12);
    int total_sum = 0;
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    if (k == 0) {
        cout << 0 << endl;
        return;
    }

    if (total_sum < k) {
        cout << -1 << endl;
        return;
    }

    sort(a.rbegin(), a.rend());

    int current_growth = 0;
    int months = 0;

    for (int i = 0; i < 12; i++) {
        current_growth += a[i];
        months++;
        if (current_growth >= k) {
            cout << months << endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}