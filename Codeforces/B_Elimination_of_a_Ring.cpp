#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    set<int> distinct_elements;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        distinct_elements.insert(a[i]);
    }
    
    if (distinct_elements.size() == 2) {
        cout << (n / 2) + 1 << endl;
    } 
    else {
        cout << n << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--) {
        solve();
    }

    return 0;
}