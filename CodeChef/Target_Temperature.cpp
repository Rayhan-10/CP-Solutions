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
    int mxt = *max_element(a.begin(), a.end());
    sort(a.begin(), a.end());

    bool possible = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1] && a[i] < mxt)
        {
            possible = false;
            break;
        }
    }

    if (possible == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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