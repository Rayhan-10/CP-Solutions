#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, k;
    cin>>n>>x>>k;
   
        int ans = x;

        for (int y = 0; y <= n; y++) {
            if (y % k == 0) {                 
                int change = abs(x - y);   
                if (change < ans)
                    ans = change;
            }
        }
        cout<<ans<<"\n";
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