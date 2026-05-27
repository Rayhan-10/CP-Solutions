#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int x,y,a,b; cin>>x>>y>>a>>b;
    if(x > a){
        cout<<"Alice"<<endl;
    }
    else if(x < a)
    {
        cout<<"Bob"<<endl;
    }
    else if(x == a)
    {
        if(y>b)
        {
        cout<<"Alice"<<endl;
        }
        else if(b > y)
        {
        cout<<"Bob"<<endl;
        }
        else
        {
        cout<<"Alice"<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}