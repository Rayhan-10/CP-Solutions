#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    string s; cin>>s;
    vector<int> ar;
    for(int i = 0; i < n; i++){
        if(s[i]=='0')
        {
            ar.push_back(a[i]);
        }
    }
    if(ar.size() < k)
    {
        cout<<-1<<"\n";
        return;
    }
    else
    {
        long long sum=0;
        sort(ar.begin(), ar.end());
        for(int i = 0; i < k; i++){
                sum+=ar[i];
            }
            
        
        cout<<sum<<"\n";
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