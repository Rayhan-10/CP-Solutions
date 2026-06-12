#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int max_height = 1;
    int total_towers = 1;
    int current_height = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_height++;
        } else {
            total_towers++;
            current_height = 1;
        }

        if (current_height > max_height) {
            max_height = current_height;
        }
    }

    cout << max_height << " " << total_towers << endl;
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