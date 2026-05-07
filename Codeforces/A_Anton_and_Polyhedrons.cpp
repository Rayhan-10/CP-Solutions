#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s == "Icosahedron")
        {
            sum+=20;
        }
        else if(s== "Cube")
        {
            sum+=6;
        }
        else if(s=="Tetrahedron")
        {
            sum+=4;
        }
        else if(s== "Dodecahedron")
        {
            sum+=12;
        }
        else
        {
            sum+=8;
        }
    }
    cout<<sum<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}