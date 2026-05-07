#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    if(st.size() == 1)
    {
        cout<<*st.begin()<<"\n";
        return;
    }
    int size = st.size();
    for(int i=size; i<=*st.rbegin(); i++)
    {
        if(st.count(i))
        {
            cout<<i<<"\n";
            break;
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
