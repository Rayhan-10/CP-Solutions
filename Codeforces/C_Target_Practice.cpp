#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    // int s[10][10] = {
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    //     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    //     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    //     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    //     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    //     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    //     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    //     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    //     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    // char a[10][10];
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    // ll score = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         if (a[i][j] == 'X')
    //             {
    //                 score += s[i][j];
    //             }
           
    //     }
        
    // }
    // cout << score << endl;
    int total_score = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            char c; cin >> c;
            if (c == 'X') {
                
                int ring = min({i, j, 9 - i, 9 - j}) + 1;
                total_score += ring;
            }
        }
    }
    cout << total_score << endl;
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