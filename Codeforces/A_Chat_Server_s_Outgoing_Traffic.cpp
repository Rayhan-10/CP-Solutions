#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string s;
    int a = 0;
    ll b = 0;

    while (getline(cin, s)) {
        if (s.empty()) {
            continue;
        }
        
        if (s[0] == '+') {
            a++;
        } else if (s[0] == '-') {
            a--;
        } else {
            int c = s.find(':');
            int d = s.length() - c - 1;
            b += (1LL * d * a);
        }
    }

    cout << b << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}