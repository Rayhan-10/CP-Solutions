#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int oneCount=0;
    for(int i=0; i<n; i++)
    {
        int p;
        cin>>p;
        if(p == 1)
        {
            oneCount++;
        }
    }
    if( oneCount >= 1)
    {
        cout<<"Hard\n";
    }
    else
    {
        cout<<"Easy\n";
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