#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int i=0, j=n-1;
    while(i<=j)
    {
        
        if(i == j)
        {
            cout<<a[i];
        }
        else
        {
            cout<<a[i]<<" "<<a[j]<<" ";
        }
        i++;
        j--;
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