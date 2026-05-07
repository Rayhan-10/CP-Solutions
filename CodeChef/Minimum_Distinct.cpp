#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    map<int, int> freq;
    for (int x : a)
        freq[x]++;

    int fixed_val = a[0];
    vector<int> others;
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        if (it->first != fixed_val)
            others.push_back(it->second);
    }
    sort(others.begin(), others.end());

    int distinct = (int)freq.size();
    for (int f : others)
    {
        if (k >= f)
        {
            k -= f;
            distinct--;
        }
        else
            break;
    }
    cout << distinct << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}