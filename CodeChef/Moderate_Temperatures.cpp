#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int mx= *max_element(a.begin(), a.end());
    int mn= *min_element(a.begin(), a.end());
    int cnt=0;
    for(int i = 0; i < n; i++){
        if(a[i] != mx && a[i] != mn)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
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