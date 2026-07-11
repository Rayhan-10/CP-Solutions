#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    string s;
    int a;

    cin >> s >> a;

    if (s == "front") {
        if (a == 1)
            cout << "L";
        else
            cout << "R";
    }
    else {
        if (a == 1)
            cout << "R";
        else
            cout << "L";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    solve();

    return 0;
}