#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    bool allSame=equal(a.begin()+1, a.end(), a.begin());
    if(allSame == 1 || a.size() <= 2)
    {
        cout<<"Yes"<<endl;
        return;
    }
    map<int,int>s;
    for(int x:a)
    {
        s[x]++;
    }
    if(s.size() >= 3)
    {
        cout<<"No"<<endl;
    }
    else if(s.size() == 1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        auto it= s.begin();
        int f1=it->second;
        it++;
        int f2=it->second;
        if(abs(f2-f1) <= 1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

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