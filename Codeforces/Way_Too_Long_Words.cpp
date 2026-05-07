#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    if(s.size() <= 10)
    {
        cout<<s<<"\n";
    }
    else
    {
        cout<<s.front()<<s.size()-2<<s.back()<<"\n";
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