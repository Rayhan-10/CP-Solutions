#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(c%2==1)
    {
        if(b>a) cout<<"Second"<<endl;
        else cout<<"First"<<endl; 
    }
    else
    {
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl; 
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