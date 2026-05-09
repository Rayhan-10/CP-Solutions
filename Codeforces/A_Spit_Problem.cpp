#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> d(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> d[i];
    }

    bool check = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue; 

            
            if (x[i] + d[i] == x[j] && x[j] + d[j] == x[i]) {
                check = true;
                break;
            }
        }
        if (check) break;
    }

    if (check) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}