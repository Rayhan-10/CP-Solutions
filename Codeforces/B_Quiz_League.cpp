#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    if (!(cin >> n >> k)) return;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int current = k;
    while (a[current] == 0) {
        current++;
        if (current > n) {
            current = 1;
        }
    }

    cout << current << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    

    return 0;
}