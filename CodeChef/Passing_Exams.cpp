#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int cnt=0;
    for(int i = 0; i < 3; i++){
        int a; cin>>a;
        if(a>=50) cnt++;
    }
    if(cnt >= 2)
    {
        cout<<"Yes"<<endl;
    }
    else   cout<<"No"<<endl;

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