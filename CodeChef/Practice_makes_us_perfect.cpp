#include <bits/stdc++.h>
using namespace std;

void solve() {
    int count =0;
    for(int i = 0; i < 4; i++){
        int n; cin >> n;
        if(n>= 10) count++;
    }
    cout<<count<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}