#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b; cin>>a>>b;
    if((b*10) <= (a*100))
    {
        cout<<"Cloth\n";
    }
    else
    {
        cout<<"Disposable\n";
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