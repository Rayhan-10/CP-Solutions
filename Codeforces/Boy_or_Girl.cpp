#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    set <char> ar;
    for(int i=0; i<s.size(); i++)
    {
        ar.insert(s[i]);
    }
    if(ar.size() % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else
    {
        cout<<"IGNORE HIM!"<<"\n";
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