#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int maxs=a[0], mins=a[0];
    bool flag=true;
    for(int i = 1; i < n; i++){
        if(a[i] == maxs + 1)
        {
            maxs=a[i];
        }
        else if(a[i] == mins - 1)
        {
            mins=a[i];
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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