#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int sum1= s[0] + s[1] + s[2];
    int sum2= s[3] + s[4] + s[5];
    if(sum1 == sum2)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";

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