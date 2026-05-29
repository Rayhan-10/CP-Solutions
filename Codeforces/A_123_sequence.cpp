#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            count1++;
        } else if (x == 2) {
            count2++;
        } else if (x == 3) {
            count3++;
        }
    }

    int max_freq = max({count1, count2, count3});
    int ans = n - max_freq;

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}