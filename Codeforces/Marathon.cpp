#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin>>a;
    int count=0;
    for(int i=0; i<3; i++)
    {
        cin>>b;
        if(b > a)
        {
             count++;
        }
    }
    cout<<count<<"\n";
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