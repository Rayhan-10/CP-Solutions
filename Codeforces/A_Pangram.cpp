#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;

    for (char c : s)
    {
        st.insert(tolower(c));
    }

    if (st.size() == 26)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}