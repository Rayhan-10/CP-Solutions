#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    int sum=0;
    vector<int>a(n);
    for(int i = 0; i < n-1; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        sum+=a[i];
    }
    cout<<0-sum<<endl;
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