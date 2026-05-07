#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        a[i]+=1;
    }
    bool flag=true;
    int parity= a[0]%2;
    for(int i=0; i<n; i+=2)
    {
        if(a[i] % 2 != parity)
        {
            flag=false;
            break;
        }
    }
    int parity2=a[1]%2;
    for(int i=1; i<n; i+=2)
    {
        if(a[i] % 2 != parity2)
        {
            flag=false;
            break;
        }
    }
    if(flag== true)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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