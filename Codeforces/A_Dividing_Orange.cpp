#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    vector<bool> used(n * k + 1, false);

    for (int i = 0; i < k; i++) {
        cin >> a[i];
        used[a[i]] = true;
    }

    int current_segment = 1;

    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
        
        int count = 1;
        while (count < n && current_segment <= n * k) {
            if (!used[current_segment]) {
                cout << current_segment << " ";
                used[current_segment] = true;
                count++;
            }
            current_segment++;
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}