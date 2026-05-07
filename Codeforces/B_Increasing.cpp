#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    if(a.size() == 1)
    {
        cout<<"YES"<<"\n";
        return;
    }
    bool flag=true;
    int i=0, j=1;
    while(i < a.size()-1)
    {
        if(a[i] >= a[j])
        {
            flag=false;
        }
        i++;
        j++;
    }
    if(flag == true)
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