// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, m;
//     if (!(cin >> n >> m)) return;

//     vector<int> prices(n);
//     for (int i = 0; i < n; i++) {
//         cin >> prices[i];
//     }
//     sort(prices.begin(), prices.end());

//     map<string, int> fruit_counts;
//     for (int i = 0; i < m; i++) {
//         string name;
//         cin >> name;
//         fruit_counts[name]++;
//     }

//     vector<int> counts;
//     for (auto const& x : fruit_counts) {
//         counts.push_back(x.second);
//     }
//     sort(counts.rbegin(), counts.rend());

//     long long min_total = 0;
//     for (int i = 0; i < (int)counts.size(); i++) {
//         min_total += (long long)counts[i] * prices[i];
//     }

//     long long max_total = 0;
//     int price_idx = n - 1;
//     for (int i = 0; i < (int)counts.size(); i++) {
//         max_total += (long long)counts[i] * prices[price_idx];
//         price_idx--;
//     }

//     cout << min_total << " " << max_total << endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }































#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve() {
    string s;
    cin >> s;
    int state = 0;
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (state == 0) {
            if (ch == 'a') state = 0;
            else if (ch == 'b') state = 1;
            else {
                state = -1;
                break;
            }
        }
        else if (state == 1) {
            if (ch == 'c') state = 2;
            else {
                state = -1;
                break;
            }
        }
        else if (state == 2) {
            state = -1;
            break;
        }
    }
    if (state == 2) cout << "Accepted"<<endl;  
    else cout << "Rejected"<<endl;     
}
int main() {
    int TC;
    cin >> TC;
    while (TC--){
        solve();
    }
    return 0;
}