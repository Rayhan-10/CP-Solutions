#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, st;
    cin>>s;
    string r="abc";
    if(s == r)
    {
        cout<<"Yes\n";
    }
    st=s;
    swap(s[0],s[1]);
    if(s== r)
    {
        cout<<"Yes\n";
    }
    else
    {
        s=st;
    }
    st=s;
    swap(s[1],s[2]);
    if(s== r)
    {
        cout<<"Yes\n";
    }
    else
    {
        s=st;
    }
    st=s;
    swap(s[0],s[2]);
    if(s== r)
    {
        cout<<"Yes\n";
    }
    else
    {
        s=st;
    }
    if(s!=r)
    {
        cout<<"No\n";
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