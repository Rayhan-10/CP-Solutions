#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >>n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> folders;
    int current_days = 0;
    int negative_count = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            negative_count++;
        }

        if (negative_count == 3) {
            folders.push_back(current_days);
            current_days = 1;
            negative_count = 1;
        } else {
            current_days++;
        }
    }

    if (current_days > 0) {
        folders.push_back(current_days);
    }

    cout << folders.size() << endl;
    for (int i = 0; i < folders.size(); ++i) {
        cout << folders[i] << (i == folders.size() - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
    
            solve();
        
    

    return 0;
}