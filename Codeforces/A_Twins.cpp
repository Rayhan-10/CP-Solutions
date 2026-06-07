#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    sort(a.rbegin(), a.rend());

    int my_sum = 0;
    int coin_count = 0;

    for (int i = 0; i < n; i++) {
        my_sum += a[i];
        coin_count++;

        if (my_sum > (total_sum - my_sum)) {
            cout << coin_count << endl;
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