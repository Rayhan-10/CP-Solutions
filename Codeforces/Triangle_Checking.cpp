#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A, B, C; cin>>A>>B>>C;
    if(((A+B)>C) &&((B+C)>A) && ((A+C)>B))
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