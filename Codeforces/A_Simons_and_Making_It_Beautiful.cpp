#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }
        int pos = -1;
        for(int i = 0; i < n; i++) {
            if(p[i] == n) {
                pos = i;
                break;
            }
        }
        
        if(pos != 0) {
            swap(p[0], p[pos]);
        }

        for(int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
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