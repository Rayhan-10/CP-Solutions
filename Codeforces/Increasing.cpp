#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar.begin(), ar.end());
    int i=1, j=i+1;
    while( i<= ar.size()-1)
    {
        if(ar[i] >= ar[j])
        {
            cout<<"No"<<"\n";
            return;
        }
        i++;
        j++;
    }
    cout<<"Yes"<<"\n";
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