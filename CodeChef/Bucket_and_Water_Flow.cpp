#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d; cin>>a>>b>>c>>d;
   if(a+(c*d) == b)
   {
    cout<<"filled\n";
   }
   else if(a+(c*d) < b)
   {
    cout<<"Unfilled\n";
   }
   else
   {
    cout<<"overflow\n";
   }

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