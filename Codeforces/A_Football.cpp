#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";

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