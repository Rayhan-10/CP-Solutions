#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int diff = t[1] - t[0];
    bool is_ap = true;

    for (int i = 1; i < n - 1; i++) {
        if (t[i + 1] - t[i] != diff) {
            is_ap = false;
            break;
        }
    }

    if (is_ap) {
        cout << t[n - 1] + diff << endl;
    } else {
        cout << t[n - 1] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}