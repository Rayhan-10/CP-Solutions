#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int s, n;
    cin >> s >> n;

    vector<pair<int,int>> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    for(int i=0;i<n;i++){
        if(s > a[i].first){
            s += a[i].second;
        }
        else{
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}