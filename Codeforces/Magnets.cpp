#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int flag=0, count;
     for(int i=0; i<n; i++)
    {
        if(s[i] == "10")
        {
            if(flag==0)
            {
                count++;
            }
        }
        else
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