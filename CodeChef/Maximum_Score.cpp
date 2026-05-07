#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        
    }
    int minE= INT_MAX;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
        minE= min(minE, a[i]-b[i]);
    }
    int ans = sum - minE;
    cout<<ans<<"\n";
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