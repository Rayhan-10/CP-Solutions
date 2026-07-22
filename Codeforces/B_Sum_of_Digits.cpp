#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string s;
    cin >> s;

    if (s.length() == 1) {
        cout << 0 << endl;
        return;
    }

    int count = 0;
    while (s.length() > 1) {
        ll sum = 0;
        for (char c : s) {
            sum += (c - '0');
        }
        s = to_string(sum);
        count++;
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}