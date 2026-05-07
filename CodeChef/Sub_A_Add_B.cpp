#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a < b)
    {
        cout<<a<<"\n";
    }
    else
    {
        while(a>=b)
        {
            a=(a-b)+c;
        }
        cout<<a<<"\n";
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