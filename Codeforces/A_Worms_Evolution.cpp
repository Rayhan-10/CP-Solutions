#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (i != j && j != k && i != k) {
                    if (a[i] == a[j] + a[k]) {
                        cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                        return;
                    }
                }
            }
        }
    }

    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}