#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int del= s.size()/2;
    s.erase(s.begin(), s.begin()+del);
    int count=0;
    for(char c : s)
    {
        count++;
        cout<<c;
        if(count != s.size())
        {
            cout<<"+";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
        solve();
    // }

    return 0;
}