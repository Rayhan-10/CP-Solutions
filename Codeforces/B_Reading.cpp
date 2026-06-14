#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, k;
    if (!(cin >> n >> k)) return;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.rbegin(), arr.rend());

    cout << arr[k - 1].first << endl;
    for (int i = 0; i < k; i++) {
        cout << arr[i].second << (i == k - 1 ? "" : " ");
    }
    cout << endl;
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