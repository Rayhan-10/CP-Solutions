#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    double total_length = 0.0;
    double prev_x, prev_y;
    cin >> prev_x >> prev_y;

    for (int i = 1; i < n; ++i) {
        double curr_x, curr_y;
        cin >> curr_x >> curr_y;

        double dx = curr_x - prev_x;
        double dy = curr_y - prev_y;
        total_length += sqrt(dx * dx + dy * dy);

        prev_x = curr_x;
        prev_y = curr_y;
    }

    double total_time = (total_length * k) / 50.0;

    cout << fixed << setprecision(9) << total_time << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}