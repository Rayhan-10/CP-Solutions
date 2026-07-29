#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int min_val = 2e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min_val) {
            min_val = a[i];
        }
    }

    int cnt = 0;
    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == min_val) {
            cnt++;
            idx = i + 1;
        }
    }

    if (cnt > 1) {
        cout << "Still Rozdil" << endl;
    } else {
        cout << idx << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}