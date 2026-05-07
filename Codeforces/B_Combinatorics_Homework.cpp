#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    vector<long long> v(3);
    long long m;
    cin >> v[0] >> v[1] >> v[2] >> m;

    long long m_max = (v[0] - 1) + (v[1] - 1) + (v[2] - 1);


    sort(v.begin(), v.end());

    long long m_min = v[2] - (v[0] + v[1] + 1);

    if (m_min < 0) m_min = 0;

    if (m >= m_min && m <= m_max) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--) {
        solve();
    }

    return 0;
}