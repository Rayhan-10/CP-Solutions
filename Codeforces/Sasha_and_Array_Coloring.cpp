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
    sort(a.begin(), a.end());
    int count=0, i=0, j=n-1;
    while(i<j)
    {
        count+=(max(a[i], a[j]) - min(a[i], a[j]));
        i++;
        j--;
    }
    cout<<count<<"\n";


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