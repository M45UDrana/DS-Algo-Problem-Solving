#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, k; cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > k*2)
        {
            while(a[i] > k*2)
                k *= 2, ans++;
        }
        k = max(k, a[i]);
    }
    cout << ans << endl;
    return 0;
}