#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> freq;
    for (char c : s1) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    bool possible = true;
    for (char c : s2) {
        if (c != ' ') {
            if (freq[c] > 0) {
                freq[c]--;
            } else {
                possible = false;
                break;
            }
        }
    }

    if (possible == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}