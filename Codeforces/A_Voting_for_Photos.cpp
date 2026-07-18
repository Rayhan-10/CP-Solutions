#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int cnt[1000005];

void solve() {
    int n; cin >> n;
    
    int max_likes = 0;
    int winner = 0;
    
    for (int i = 0; i < n; i++) 
    {
        int photo_id;
        cin >> photo_id;
        cnt[photo_id]++;
        if (cnt[photo_id] > max_likes) 
        {
            max_likes = cnt[photo_id];
            winner = photo_id;
        }
    }
    
    cout << winner << endl;
    
    for (int i = 0; i <= 1000000; i++) 
    {
        cnt[i] = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    while (TC--) {
        solve();
    }

    return 0;
}