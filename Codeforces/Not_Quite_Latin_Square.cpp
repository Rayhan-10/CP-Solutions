#include <bits/stdc++.h>
using namespace std;

void solve() {
    char ans= 0;
    char s[3][3];
    for (int i = 0; i < 3; i++) {
            string s;
            cin >> s;

            if (s.find('?') != string::npos) {
                bool A = false, B = false, C = false;

                for (char ch : s) {
                    if (ch == 'A') A = true;
                    if (ch == 'B') B = true;
                    if (ch == 'C') C = true;
                }

                if (!A) cout << "A\n";
                else if (!B) cout << "B\n";
                else cout << "C\n";
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