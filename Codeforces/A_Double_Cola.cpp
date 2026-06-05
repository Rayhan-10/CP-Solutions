#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll n;
    cin >> n;

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    ll group_size = 5;
    while (n > group_size) {
        n -= group_size;
        group_size *= 2;
    }

    ll each_person_count = group_size / 5;
    ll index = (n - 1) / each_person_count;

    cout << names[index] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}