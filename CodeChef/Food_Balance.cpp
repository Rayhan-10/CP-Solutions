#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d; cin>>a>>b>>c>>d;
    int d1=abs(a-b), d2=abs(c-d);
    if(d1 < d2)
    {
        cout<<"First\n";
    }
    else if(d2 < d1)
    {
        cout<<"Second\n";
    }
    else
    {
        cout<<"Both\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}