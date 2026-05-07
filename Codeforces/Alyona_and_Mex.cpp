#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        sort(a.begin(), a.end());
        // set<int> s(a.begin(), a.end());
        int mex=1, i=0;
        while (i < a.size())
        {
            if(a[i] >= mex)
            {
                mex++;
            }
            i++;
        }
        cout << mex << "\n";
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
    solve();
    // }

    return 0;
}