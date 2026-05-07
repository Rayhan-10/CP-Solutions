#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h, l;
    cin >> n >> h >> l;

    int rc = 0; 
    int cc = 0;
    int uc = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        bool fits_row = (a <= h);
        bool fits_col = (a <= l);

        if (fits_row) rc++;
        if (fits_col) cc++;
        if (fits_row || fits_col) uc++;
    }
    int result = min({rc, cc, uc / 2});
    
    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while(TC--) solve();

    return 0;
}
