#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, k, l;
    cin >> n >> m >> k >> l;
    ll ans = ((k+l)+m-1)/m;
    if(m*ans <= n)
        cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}