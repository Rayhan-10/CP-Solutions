#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int bs=0;
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 0){
            count++;
        }
        else
        {
            bs= max(bs, count);
            count=0;
        }
    }
    bs = max(bs, count);
    cout<<bs<<"\n";
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