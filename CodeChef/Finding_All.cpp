#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    int p = 0, m = 0, z = 0;
    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        if (val == 1) p++;
        else if (val == -1) m++;
        else z++;
    }

    set<int> res;
    res.insert(0);
    if (p > m) res.insert(-1);
    if (m > p) res.insert(1);

    bool first = true;
    for (int x : res) {
        if (!first) cout << " ";
        cout << x;
        first = false;
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}