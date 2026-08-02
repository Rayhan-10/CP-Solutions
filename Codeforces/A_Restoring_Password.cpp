#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string s;
    cin >> s;

    vector<string> digits(10);
    for (int i = 0; i < 10; i++) {
        cin >> digits[i];
    }

    for (int i = 0; i < 80; i += 10) {
        string sub = s.substr(i, 10);
        for (int j = 0; j < 10; j++) {
            if (sub == digits[j]) {
                cout << j;
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}