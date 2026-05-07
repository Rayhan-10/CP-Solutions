#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    int w1 = max(a1, a2);
    int w2 = max(a3, a4);

    vector<int> v = {a1, a2, a3, a4};
    sort(v.begin(), v.end()); 

    if(min(w1, w2) == v[2])
        cout << "YES\n";
    else
        cout << "NO\n";
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