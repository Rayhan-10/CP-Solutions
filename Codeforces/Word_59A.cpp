#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int uCount=0, lCount=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] < 'a')
        {
            uCount++;
        }
        else
        {
            lCount++;
        }
    }
    if(uCount > lCount)
    {
        transform(s.begin(), s.end(), s.begin(), :: toupper);
        cout<<s<<"\n";
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        cout<<s<<"\n";
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