#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int x = i;
        bool lucky = true;

        while(x) {
            int d = x % 10;
            if(d != 4 && d != 7) {
                lucky = false;
                break;
            }
            x /= 10;
        }

        if(lucky && n % i == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}
