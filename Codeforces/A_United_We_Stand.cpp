#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b;
    vector<int> c;
    int mx= *max_element(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(a[i] == mx )
        {
            c.push_back(a[i]);
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    if (b.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    cout<<b.size()<<" "<<c.size();
    cout<<endl;
    for(int i = 0; i < b.size(); i++){
        cout<<b[i];
        if(i != b.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    for(int i = 0; i < c.size(); i++){
        cout<<c[i];
        if(i != c.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--)
    {
        solve();
    }

    return 0;
}