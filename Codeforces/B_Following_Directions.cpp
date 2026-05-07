#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r; cin>>r;
    string s;
    cin>>s;
    int x = 0, y = 0;   

    for (int i = 0; i < r; i++) {
        if (s[i] == 'U') y++;
        else if (s[i] == 'D') y--;
        else if (s[i] == 'R') x++;
        else if (s[i] == 'L') x--;

        if (x == 1 && y == 1) {
            cout << "YES\n";
            return;
        }
    }

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