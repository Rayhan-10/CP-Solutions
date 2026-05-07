#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool ok = false;
    for(int i = 0; i <= n - 4; i++) {
        if(s.substr(i, 4) == "2026") {
            ok = true;
            break;
        }
    }

    if(ok) {
        cout << 0 << "\n";
        return;   
    }

    int ans = 4;

    for(int i = 0; i <= n - 4; i++) {
        int diff = 0;
        string target = "2026";

        for(int j = 0; j < 4; j++) {
            if(s[i + j] != target[j]) {
                diff++;
            }
        }

        ans = min(ans, diff);
    }

    cout << ans << "\n";
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