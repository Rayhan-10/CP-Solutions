#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int AC=0, DC=0;
    for(char c : s)
    {
        if( c == 'A')
        {
            AC++;
        }
        else
        {
            DC++;
        }
    }
    if(AC > DC)
    {
        cout<<"Anton\n";
    }
    else if(DC > AC)
    {
        cout<<"Danik\n";
    }
    else
    {
        cout<<"Friendship\n";
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