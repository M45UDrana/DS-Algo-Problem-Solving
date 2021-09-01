#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 1e5+7;

int main()
{
    int n, k; cin >> n >> k;
    ll ans = 0, sum = 0;
    int a[n+2];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    a[0] = a[n];
    a[n+1] = a[1];
    for(int i = 1; i <= n; i++)
        ans += (a[i] * a[i+1]);
    ll used_sum = 0;
    int used[N];
    memset(used, 0, sizeof(used));
    for(int i = 0, x; i < k; i++)
    {
        cin >> x;
        ll tmp = sum - (used_sum + a[x]);
        if(!used[x+1])
            tmp -= a[x+1];
        if(!used[x-1])
            tmp -= a[x-1];
        ans += (ll)tmp * a[x];
        used_sum += a[x];
        used[x] = 1;
        if(x == n) used[0] = 1;
        if(x == 1) used[n+1] = 1;
    }
    cout << ans << endl;
    return 0;
}