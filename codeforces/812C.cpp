#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m; 

ll cal(ll x)
{
    ll ans = 0;
    for(ll i = 1; i <= x and ans <= m; i++)
        ans += (x*i);
   if(ans > m)
      return (ll) 1e10;
  return ans; 
}
int main()
{
    cin >> n >> m;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i = 1; i < n; i++)
        a[i] += a[i-1];
    ll left = 1, right = n;
    while(left < right)
    {
        ll mid = (left+right+1)/2;
        ll sum = cal(mid) + a[mid-1];
        if(sum <= m)
            left = mid;
        else right = mid-1;
    }

    ll ans = cal(left) + a[left-1];
    if(ans <= m)
        cout << left << " " << ans << endl;
    else cout << 0 << " " << 0 << endl;
    return 0;
}