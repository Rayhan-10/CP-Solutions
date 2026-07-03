#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    int mxl = 0;
    int mnr = 1000;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        int start = min(a, b);
        int end = max(a, b);

        if (start > mxl) {
            mxl = start;
        }
        if (end < mnr) {
            mnr = end;
        }
    }

    if (mxl > mnr) {
        cout << -1 << endl;
    } else {
        if (m >= mxl && m <= mnr) {
            cout << 0 << endl;
        } else if (m < mxl) {
            cout << mxl - m << endl;
        } else {
            cout << m - mnr << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}