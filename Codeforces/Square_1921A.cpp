#include <bits/stdc++.h>
using namespace std;

void solve() {
    int ar[4][2];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>ar[i][j];
        }
    }
    vector <int> arr;
     for(int i=0; i<4; i++)
    {
            int x=ar[i][0];
            arr.push_back(x);
        
    }
    int maxE = *max_element(arr.begin(), arr.end());
    int minE = *min_element(arr.begin(), arr.end());
    int side= maxE - minE;
    int area= (side * side);
    cout<<area<<"\n";

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