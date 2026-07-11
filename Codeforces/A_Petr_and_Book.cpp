#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int a[7];
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }

    int i = 0;
    while (n > 0) {
        n -= a[i];
        if (n <= 0) {
            cout << i + 1 << endl;
            break;
        }
        i = (i + 1) % 7;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}