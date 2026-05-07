#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    sort(s.begin(), s.end());
    if( s == "act")
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}