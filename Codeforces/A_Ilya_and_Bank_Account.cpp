#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << endl;
    } else {
        int a1 = n/ 10;
        int a2 = (n / 100) * 10 +(n % 10);

        if (a1 > a2) {
            cout << a1 <<endl;
        } else {
            cout << a2 <<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}