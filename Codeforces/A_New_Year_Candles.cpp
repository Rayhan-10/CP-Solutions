#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int a, b;
    cin >> a >> b;
    
    int hours = 0;
    int went_out = 0;
    
    while (a > 0) {
        hours += a;
        went_out += a;
        
        a = went_out / b;
        went_out = went_out % b;
    }
    
    cout << hours << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    

    return 0;
}