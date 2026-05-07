#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; char d;
    cin>>n>>d;
    string s;
    cin>>s;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if( s[i] < d)
        {
            s.insert(s.begin()+i, d);
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        s.push_back(d);
    }
    cout<<s<<"\n";

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