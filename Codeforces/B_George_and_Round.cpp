#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> b(m);
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
       int i = 0, j = 0;
    int used = 0;

    while (i < n && j < m) {
        if (b[j] >= a[i]) {
            used++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    cout << n - used << "\n";


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
        solve();
    // }

    return 0;
}