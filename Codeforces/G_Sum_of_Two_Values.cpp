#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, b; cin>>n>>b;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] + a[j] == b)
            {
                cout<<i+1<<" "<<j+1<<"\n";
                return;
            }
        }
    }
    cout<<-1<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}