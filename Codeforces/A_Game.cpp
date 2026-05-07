#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; cin>>k;
    int a=0,b=0;
    bool flag=true;
    for(int i = 0; i < 2; i++){
        int c,d;
        cin>>c>>d;
        if(c>k && d>k) flag=false;
        a+=c;
        b+=d;
    }
    if(flag == false)
    {
        cout<<"NO\n";
        return;
    }
    else
    {
        if((b+k) > a)
        {
            cout<<"YES\n";
        }
        else{
        cout<<"NO\n";
        }
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