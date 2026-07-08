#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> speed(n), ram(n), hdd(n), cost(n);
    for (int i = 0; i < n; i++) {
        cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];
    }

    int ans = -1;
    int min_cost = 2e9;

    for (int i = 0; i < n; i++) {
        bool outdated = false;

        for (int j = 0; j < n; j++) {
            if (speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j]) {
                outdated = true;
                break;
            }
        }

        if (!outdated) {
            if (cost[i] < min_cost) {
                min_cost = cost[i];
                ans = i + 1;
            }
        }
    }

    cout << ans << endl;
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