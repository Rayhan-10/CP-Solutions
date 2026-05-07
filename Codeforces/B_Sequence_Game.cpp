#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; i++)
    {
        if (b[i] < b[i - 1])
        {
            a.push_back(b[i]);  
            a.push_back(b[i]);
        }
        else
        {
            a.push_back(b[i]);
        }
    }

    cout << a.size() << endl;  
    for (int i = 0; i < (int)a.size(); i++)  
    {
        cout << a[i];
        if (i != (int)a.size() - 1)
            cout << " ";
    }
    cout << endl;
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