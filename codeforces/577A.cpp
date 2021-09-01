#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
     ll n, x; cin >> n >> x;
     ll sq = sqrt(x)+.5;
     int ans = 0;
     for(int i = sq; i > 0; i--)
     {
         if(x%i == 0 and i <= n and (x/i) <= n)
         {
             if(i == (x/i))
                 ans++;
             else
                ans += 2;
         }
     }
     cout << ans << endl;
    return 0;
}