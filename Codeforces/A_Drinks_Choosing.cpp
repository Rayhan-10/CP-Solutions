#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> count(k + 1, 0);
    for (int i = 0; i < n; i++) {
        int drink;
        cin >> drink;
        count[drink]++;
    }
    
    int total_sets = (n + 1) / 2;
    int happy_students = 0;
    int odd_counts = 0;
    
    for (int i = 1; i <= k; i++) {
        happy_students += (count[i] / 2) * 2;
        if (count[i] % 2 != 0) {
            odd_counts++;
        }
    }
    
    int sets_used = happy_students / 2;
    int remaining_sets = total_sets - sets_used;
    happy_students += remaining_sets;
    
    cout << happy_students << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}