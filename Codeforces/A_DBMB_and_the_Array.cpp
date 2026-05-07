#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long sum = 0;
    for (int val : ar)
    {
        sum += val;
    }
    if (sum == s)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        bool flag=true;
        while (sum <= s)
        {
            sum += x;
            if (sum == s)
            {
                cout << "Yes" << "\n";
                flag=false;
                break;
            }
        }
        if(flag == true)
        {
                cout << "No" << "\n";
        }
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