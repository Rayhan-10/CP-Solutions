#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        if (s == 1) count1++;
        else if (s == 2) count2++;
        else if (s == 3) count3++;
        else if (s == 4) count4++;
    }

    int taxis = count4;

    taxis += count3;
    count1 -= count3;
    if (count1 < 0) {
        count1 = 0;
    }

    taxis += count2 / 2;
    if (count2 % 2 != 0) {
        taxis++;
        count1 -= 2;
        if (count1 < 0) {
            count1 = 0;
        }
    }

    if (count1 > 0) {
        taxis += (count1 + 3) / 4;
    }

    cout << taxis << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}
