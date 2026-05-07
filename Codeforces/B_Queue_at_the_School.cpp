#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, t; cin >> n >> t;
    string s; cin >> s;

    while (t--) {
        for (int j = 0; j < n - 1;) {
            if (s[j] == 'B' && s[j+1] == 'G') {
                swap(s[j], s[j+1]);
                j += 2; 
            } else {
                j++;
            }
        }
    }

    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     solve();

    return 0;
}