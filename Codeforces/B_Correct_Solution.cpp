#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string n, m;
    cin >> n >> m;

    sort(n.begin(), n.end());

    if (n.length() > 1 && n[0] == '0') {
        for (int i = 0; i < n.length(); i++) {
            if (n[i] != '0') {
                swap(n[0], n[i]);
                break;
            }
        }
    }

    if (n == m) {
        cout << "OK" << endl;
    } else {
        cout << "WRONG_ANSWER" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}