#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(105, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<int> result;

    for (int i = 0; i < 105; i++) {
        if (freq[i] > 0) {
            result.push_back(i);
            freq[i]--;
        }
    }

    for (int i = 0; i < 105; i++) {
        while (freq[i] > 0) {
            result.push_back(i);
            freq[i]--;
        }
    }

    for (int x : result) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
