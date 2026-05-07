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

    vector<int> color(n);
    for (int i = 0; i < n; i++)
    {
        color[i] = i % 2;
    }

    vector<int> valColor(n + 1);
    for (int i = 0; i < n; i++)
    {
        valColor[a[i]] = color[i];
    }

    vector<int> sa = a;
    sort(sa.begin(), sa.end());

    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (valColor[sa[i]] == valColor[sa[i - 1]])
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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