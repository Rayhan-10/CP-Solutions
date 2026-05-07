#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin>>x;
    if(x <= 1399)
    {
        cout<<"Division 4\n";
    }
    else if(x <= 1599 && x >= 1400)
    {
        cout<<"Division 3\n";

    }
    else if(x <= 1899 && x >= 1600)
    {
        cout<<"Division 2\n";

    }
    else
    {
        cout<<"Division 1\n";
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