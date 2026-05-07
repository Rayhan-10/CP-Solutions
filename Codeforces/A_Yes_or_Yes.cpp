#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    long long yCount= count(s.begin(), s.end(), 'Y');
    if(yCount > 1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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