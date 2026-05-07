// https://codeforces.com/problemset/problem/1352/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin>>n;
        if(n < 9 || n%10 == 0)
        {
            cout<<1<<"\n"<<n<<"\n";
        }
        else
        {
            int cnt=1;
            while( n % 10 == 0)
            {
                n/10;
                cnt++;
            }

            cout<<cnt;
        }

    }
    return 0;
}