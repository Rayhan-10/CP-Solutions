#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin>>s;
    int ac=0, bc=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a') ac++;
        else bc++;
    }
    cout<<ac<<" "<<bc<<endl;
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