#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> prime_count(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        if (prime_count[i] == 0) { 
            for (int j = i; j <= n; j += i) {
                prime_count[j]++;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (prime_count[i] == 2) {
            ans++;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}