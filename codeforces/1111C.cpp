#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll N = 1e5+5;
ll n, m, k, a, b;
ll avng[N];

ll search(ll x)
{
    ll l = 0, r = k;
    while(l < r)
    {
        ll mid = (l+r+1)/2;
        if(avng[mid] <= x)
            l = mid;
        else r = mid-1;
    }
    return l;
}

ll range(ll lft, ll rht)
{
    ll na = search(rht)-search(lft);
    if(!na)
        return a;
    else if(rht-lft == 1)
        return b*na;
    else
    {
        ll res = range(lft, (lft+rht)/2)+
            range((lft+rht)/2, rht);
        return min(res, b*na*(rht-lft));
    }
}
int main()
{
    cin >> m >> k >> a >> b;
    n = pow(2,m);
    for(int i = 1; i <= k; i++)
        cin >> avng[i];
    sort(avng+1, avng+k+1);
    cout << range(0, n) << endl;
    return 0;
}