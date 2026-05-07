// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x=0;
    int s;
    cin>>s;
    char st[10];
    for(int i=0; i<s; i++)
    {
        
        cin>>st;
        if(st[1]== '+')
        {
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;

    return 0;
}