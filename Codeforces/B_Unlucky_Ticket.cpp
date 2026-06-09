#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string first_half = "";
    string second_half = "";

    for (int i = 0; i < n; i++) {
        first_half += s[i];
    }
    for (int i = n; i < 2 * n; i++) {
        second_half += s[i];
    }

    sort(first_half.begin(), first_half.end());
    sort(second_half.begin(), second_half.end());

    bool strictly_less = true;
    bool strictly_greater = true;

    for (int i = 0; i < n; i++) {
        if (first_half[i] >= second_half[i]) {
            strictly_less = false;
        }
        if (first_half[i] <= second_half[i]) {
            strictly_greater = false;
        }
    }

    if (strictly_less || strictly_greater) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    while (TC--) {
        solve();
    }

    return 0;
}