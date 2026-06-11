#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int left = 1;
    int right = n * n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << left << " " << right << " ";
            left++;
            right--;
        }
        cout << endl;
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