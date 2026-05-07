#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c; cin>>a>>b>>c;
    if((a >= 10 && b>=10 && c>=10) && (a+b+c)>= 100)
    {
        cout<<"PASS\n";
    }
    else
    {
        cout<<"FAIL\n";
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