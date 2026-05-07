#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

  
    if (x != 1) {
        cout << "YES" << "\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++) {
            cout << 1 << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    } 
    else if (k == 1) {
        cout << "NO" << "\n";
    }
    else {
        
        if (n % 2 == 0) {
            cout << "YES" << "\n";
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 2; i++) {
                cout << 2 << (i == (n / 2) - 1 ? "" : " ");
            }
            cout << "\n";
        } 
        else {
            if (k >= 3) {
                cout << "YES" << "\n";
                cout << (n - 3) / 2 + 1 << "\n";
                cout << 3 << " ";
                for (int i = 0; i < (n - 3) / 2; i++) {
                    cout << 2 << (i == ((n - 3) / 2) - 1 ? "" : " ");
                }
                cout << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
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