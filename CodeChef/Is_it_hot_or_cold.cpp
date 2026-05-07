#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n>20)
    {
        cout<<"HOT\n";
    }
    else
    {
        cout<<"COLD\n";
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