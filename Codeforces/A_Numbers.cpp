#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int a;
    if (!(cin >> a)) return;

    int total_sum = 0;
    int total_bases = a - 2;

    for (int base = 2; base <= a - 1; base++) {
        int temp = a;
        while (temp > 0) {
            total_sum += (temp % base);
            temp /= base;
        }
    }

    int common_gcd = __gcd(total_sum, total_bases);
    
    int x = total_sum / common_gcd;
    int y = total_bases / common_gcd;

    cout << x << "/" << y << endl;
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