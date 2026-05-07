#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b; cin>>a>>b;
    if(b < 3*a)
    {
        cout<<"Dry\n";
    }
    else
    {
        cout<<"Rain\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    

    return 0;
}