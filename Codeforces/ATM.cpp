#include <bits/stdc++.h>
using namespace std;

void solve() {
    int X;
    double Y;
    cin >> X >> Y;
    if(X % 5 == 0 && X + 0.50 <= Y) {
        Y = Y - (X + 0.50);
    }

    cout << fixed << setprecision(2) << Y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}