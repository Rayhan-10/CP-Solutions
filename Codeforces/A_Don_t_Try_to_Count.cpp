#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n,k; cin>>n>>k;
    string s,t;
    cin>>s>>t;
    if(s.find(t) != string::npos)
        {
            cout<<0<<endl;
            return;
        }
    int cnt=0;
    for(int i = 0; i < 5; i++){
        s.append(s);
        if(s.find(t) == string::npos)
        {
            cnt++;
        }
        else
        {
            cout<<cnt+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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