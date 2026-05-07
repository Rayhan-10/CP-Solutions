#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d; cin>>a>>b>>c>>d;
    if((a*b*c) > pow(d,3))
    {
        cout<<"Cuboid\n";
    }
    else if((a*b*c) < pow(d,3))
    {
        cout<<"Cube\n";
    }
    else
    {
        cout<<"Equal\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}