#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    int count = 0;
    bool wearing = false;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t < a)
        {
            if (wearing == false)
            {
                count++;
                wearing = true;
            }
        }
        else if (t > b)
        {
            wearing = false;
        }
    }

    cout << count << "\n";
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
