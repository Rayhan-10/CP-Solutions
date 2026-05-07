#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int a,b; cin>>a>>b;
    if(b> ((a/2))) 
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<((a/2)-b)+1<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}