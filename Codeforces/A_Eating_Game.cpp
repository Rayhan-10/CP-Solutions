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
    int maxE= *max_element(a.begin(), a.end());
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == maxE)
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