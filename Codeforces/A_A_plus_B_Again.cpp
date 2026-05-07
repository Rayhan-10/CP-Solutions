#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int fd= n/10;
    int ld = n%10;
    cout<<fd+ld<<"\n";
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