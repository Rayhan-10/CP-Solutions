//unsolved

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    bool flag = true;
     for(int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for(int i=1; i<n; i++) {
        cin >> a[i];
        sum += a[i];
        if(a[i] != a[i-1]) {
            flag = false;
        }
    }

    if(flag) {
        cout << "YES\n";
        return;
    }

    if(sum == 0 && n % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}