#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> k(n);
    for (int i = 0; i < n; ++i) {
        cin >> k[i];
    }

    int mnt = INT_MAX;

    for (int i = 0; i < n; i++) {
        int cct = 0;
        for (int j = 0;j<k[i]; j++) {
            int items;
            cin >> items;
            cct += (items*5)+15;
        }
        if (cct < mnt) {
            mnt = cct;
        }
    }

    cout << mnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}