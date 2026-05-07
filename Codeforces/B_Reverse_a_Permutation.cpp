#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // cout<<maxIndex<<endl;
    int start = 0;
    while (start < n && ar[start] == n - start)
        start++;
    int maxIndex = start;
    for (int i = start; i < n; i++)
    {
        if (ar[i] > ar[maxIndex])
            maxIndex = i;
    }
    reverse(ar.begin() + start, ar.begin() + maxIndex + 1);
    for (auto val : ar)
    {
        cout << val << " ";
    }
    cout << "\n";
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