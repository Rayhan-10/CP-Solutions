#include <bits/stdc++.h>
using namespace std;

void solve() {
    int ar[3];
    for(int i=0; i<3; i++)
    {
        cin>>ar[i];
    }
    sort(ar, ar+3);

    int mid=ar[1];
    cout<<mid<<"\n";
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