#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n,k; cin >> n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        cin>>b[i];
    }
    int mx=INT_MIN;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int mxc=max(a[i], a[j]);
            int tc=0;
            if(mxc < 200)
            {
                tc=(a[i]+a[j])-(mxc/2);
            }
            else
            {
                tc=(a[i]+a[j])-100;
            }
            if(tc<=k)
            {
                if((b[i]+b[j]) >= mx)
                {
                    mx=b[i]+b[j];
                }
            }
        }
    }
    if(mx== INT_MIN)
    {
    cout<<0<<endl;
    }
    else{
    cout<<mx<<endl;
    }
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