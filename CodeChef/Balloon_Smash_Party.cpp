#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long hit = 0;
        for (int i = 0; i < n; i++)
        {
            if (hit >= v[i])
                cout << v[i] << " ";
            else
            {
                cout << hit << " ";
                hit++;
            }
        }
        cout << endl;
    }

    return 0;
}