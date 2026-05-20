#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> instruments(n);

    for (int i = 0; i < n; i++) {
        cin >> instruments[i].first;
        instruments[i].second = i + 1;
    }

    sort(instruments.begin(), instruments.end());

    vector<int> learned;
    int current_days = 0;

    for (int i = 0; i < n; i++) {
        if (current_days + instruments[i].first <= k) {
            current_days += instruments[i].first;
            learned.push_back(instruments[i].second);
        } else {
            break;
        }
    }

    cout << learned.size() << endl;

    for (int i = 0; i < learned.size(); i++) {
        cout << learned[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}