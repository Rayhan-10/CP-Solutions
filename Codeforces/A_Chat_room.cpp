#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    int count=0;
    string target= "hello";
    int j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == target[j])
        {
            count++;
            j++;
        }
    }
    if(count == 5){
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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