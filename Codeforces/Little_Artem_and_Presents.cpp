#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int sum=0, count=0;
    int i=1;
    while(sum <= n)
    {
        if(i % 2 != 0)
        {
            sum+=1;
        }
        else
        {
            sum+=2;
        }
        if(sum <= n)
        {
            count++;
        }
        i++;
    }
    cout<<count<<"\n";
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