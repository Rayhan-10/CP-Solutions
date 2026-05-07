#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    
    int sumX = 0, sumY = 0, sumZ = 0;
    
    for(int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if(sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
        solve();
    // }

    return 0;
}