#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    int n, coun = 0, ans = 0;
    cin >> n;
    for(int i = 0, temp; i < n; i++)
    {
        cin >> temp;
        coun += temp;
    }
    n++;
   
   for(int i= 1; i <= 5; i++)
   {
   	if((coun + i) % n != 1) ans++;
   }
   cout << ans << endl;
    return 0;
}