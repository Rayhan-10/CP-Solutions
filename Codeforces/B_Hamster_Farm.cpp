#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll n;
    int k;
    cin >> n >> k;

    ll max_hamsters = -1;
    int best_type = 1;
    ll best_boxes = 0;

    for (int i = 1; i <= k; i++) {
        ll capacity;
        cin >> capacity;

        ll boxes = n / capacity;
        ll current_hamsters = boxes * capacity;

        if (current_hamsters > max_hamsters) {
            max_hamsters = current_hamsters;
            best_type = i;
            best_boxes = boxes;
        }
    }

    cout << best_type << " " << best_boxes << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}