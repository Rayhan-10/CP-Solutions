#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    if(is_sorted(a.begin(), a.end()) == false)
    {
        cout<<0<<endl;
    }
    else
    {
        int md=INT_MAX;
        for(int i = 1; i < n; i++){
            md=min(md, (a[i]-a[i-1]));
        }
        cout<<(md/2)+1<<endl;
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