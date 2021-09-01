#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, sum = 0; cin >> n >> m;
    ll a[n], res[n];
    memset(res, 0, sizeof(res));
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        res[i] += max(a[i] - (m - (n-1)), 0LL);
    }
    for(int i = 0; i < n; i++)
    {
        res[i] += max((m-(sum-a[i]))-1, 0LL);
    }
    for(int i = 0; i < n; i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}