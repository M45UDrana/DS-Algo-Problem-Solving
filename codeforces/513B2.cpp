#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, m; cin >> n >> m;
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int a[n+1];
    memset(a, -1, sizeof(a));
    ll p = n-2;
    for(int i = 1; i < n; i++)
    {
       if(m > pow(2, p))
       {
           for(int j = n; j > 0; j--)
           {
               if(a[j] == -1)
               {
                   a[j] = i;
                   break;
               }
           }
           m -= pow(2, p);
           p--;
       }
       else 
       {
           for(int j = 1; j <= n; j++)
           {
               if(a[j] == -1)
               {
                   a[j] = i;
                   break;
               }
           }
           p--;
       }
    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == -1)
            cout << n << " ";
        else cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}