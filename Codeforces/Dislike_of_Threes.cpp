// https://codeforces.com/problemset/problem/1560/A
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
        int k;
        cin>>k;
        int cnt=0;
        int c=0;
        while(1)
        {
            cnt++;
            if(cnt % 3 ==0 || cnt % 10 == 3)
            {
                continue;
            }
            c++;
            if(c == k)
            {
                cout<<cnt<<"\n";
                break;
            }
        }
        

    }
    return 0;
}