#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int r, g, b;
    cin >> r >> g >> b;

    int r_cars = (r + 1) / 2;
    int g_cars = (g + 1) / 2;
    int b_cars = (b + 1) / 2;

    int mx_time = 0;
    if (r_cars > 0) mx_time = max(mx_time, (r_cars - 1) * 3 + 30);
    if (g_cars > 0) mx_time = max(mx_time, (g_cars - 1) * 3 + 31);
    if (b_cars > 0) mx_time = max(mx_time, (b_cars - 1) * 3 + 32);

    cout << mx_time << endl;
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