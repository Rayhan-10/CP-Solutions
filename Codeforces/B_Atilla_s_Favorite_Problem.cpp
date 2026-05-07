#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxC=s[0]-'a';
    for(int i=1; i<s.size(); i++)
    {
        if((s[i] -'a')>= maxC)
        {
            maxC = s[i]-'a';
        }
    }
    cout<<maxC+1<<"\n";
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