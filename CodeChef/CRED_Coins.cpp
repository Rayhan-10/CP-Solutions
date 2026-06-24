#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int x, y;
    cin >> x >> y;
    
    int total_coins = x * y;
    int bags = total_coins / 100;
    
    cout << bags << endl;
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