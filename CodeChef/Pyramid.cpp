#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int TC;
    // cin >> TC;
    // while (TC--)
    // {

    // }

    // for(int i=1; i<= 10; i++)
    // {
    //     if(i == 5 || i == 7)
    //     {
    //         continue;
    //     }
    //     cout<<"Answer q: "<<i<<endl;
    // }

    // Pyramid
    //  int n;
    //  cin>>n;
    //  for(int i=1; i <=n; i++)
    //  {
    //      for(int j=1; j<= n-i; j++)
    //      {
    //          cout<<" ";
    //      }
    //      for(int k=1; k<= (i*2 -1); k++)
    //      {
    //          cout<<"*";
    //      }
    //      for(int j=1; j<= n-i; j++)
    //      {
    //          cout<<" ";
    //      }
    //      cout<<endl;
    //  }

    // Diamond
    int n;
    cin >> n;
    
        for (int m = 1; m <= (n / 2) + 1; m++)
        {
            for (int j = 1; j <= n - m; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= (m * 2 - 1); k++)
            {
                cout << "*";
            }
            for (int j = 1; j <= n - m; j++)
            {
                cout << " ";
            }
            cout<<endl;
        }
       for(int i=1; i<= n/2; i++)
       {
         for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k =(n / 2) + 2 ; k <= (k* 2 - 1); k++)
            {
                cout << "*";
            }
         for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout<<endl;
       }
        
    
    return 0;
}