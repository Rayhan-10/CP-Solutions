#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> grades(n);
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }

    vector<bool> successful(n, false);

    for (int j = 0; j < m; j++) {
        char max_grade = '0';
        for (int i = 0; i < n; i++) {
            if (grades[i][j] > max_grade) {
                max_grade = grades[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            if (grades[i][j] == max_grade) {
                successful[i] = true;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (successful[i]) {
            count++;
        }
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}