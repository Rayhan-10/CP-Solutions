#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    vector<int> m;
    for(int i=0; i<x; i++)
    {
        m.push_back(a[i]);
    }
    for(int i=x+1; i<y; i++)
    {
        m.push_back(a[i]);
    }
    sort(m.begin(), m.end());
    for(int x : m)
    {
        cout<<x<<" ";
    }
    for(int i = x; i <=y-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
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