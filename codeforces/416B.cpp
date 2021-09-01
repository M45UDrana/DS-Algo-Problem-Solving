#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int a[m+1][n+1];
    memset(a, 0, sizeof(a));
 
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];  

   for(int i = 1; i <= m; i++)
      for(int j = 1; j <= n; j++)
         a[i][j] += max(a[i-1][j], a[i][j-1]);
 
   for(int i = 1; i <= m; i++)
       cout << a[i][n] << " ";
   cout << endl;
    return 0;
}