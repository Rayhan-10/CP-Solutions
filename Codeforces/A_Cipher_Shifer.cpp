#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    string result= "";
    for(int i=0; i<n; i++)
    {
        char c=s[i];
        result+=c;
        int j=i +1;
        while(j < n && s[j] != c)
        {
            j++;
        }
        i=j;
    }
    cout<<result<<'\n';
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