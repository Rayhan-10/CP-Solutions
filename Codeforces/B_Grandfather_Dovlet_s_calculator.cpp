// Right Code (AC)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int s[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

void solve() {
    int a, b;
    cin >> a >> b;
    
    ll total_s = 0;
    for (int i = a; i <= b; i++) {
        int tmp = i;
        if (tmp == 0) {
            total_s += s[0];
        } else {
            while (tmp > 0) {
                total_s += s[tmp % 10];
                tmp /= 10;
            }
        }
    }
    
    cout << total_s << endl;
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