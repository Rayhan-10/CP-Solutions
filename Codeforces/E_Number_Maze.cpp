#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string n_str;
    int j, k;
    cin >> n_str >> j >> k;

    sort(n_str.begin(), n_str.end()); 
    vector<string> perms;
    do {
        perms.push_back(n_str);
    } while (next_permutation(n_str.begin(), n_str.end()));

    string s1 = perms[j - 1];
    string s2 = perms[k - 1];

    int A = 0, B = 0;
    int len = s1.length();
    vector<bool> used1(len, false), used2(len, false);

    for (int i = 0; i < len; i++) {
        if (s1[i] == s2[i]) {
            A++;
            used1[i] = true;
            used2[i] = true;
        }
    }

    for (int i = 0; i < len; i++) {
        if (used1[i]) continue;
        for (int m = 0; m < len; m++) {
            if (!used2[m] && s1[i] == s2[m]) {
                B++;
                used2[m] = true;
                break;
            }
        }
    }

    cout << A << "A" << B << "B" << endl;
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