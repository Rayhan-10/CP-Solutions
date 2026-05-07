#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    if(n<=2)
    {
        cout<<2<<" "<<1<<endl;
        return;
    }
    cout<<2<<" "<<n<<" ";
    for(int i = 1; i <=n-3; i++){
        cout<<n-i<<" ";
    }
    cout<<1<<endl;


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