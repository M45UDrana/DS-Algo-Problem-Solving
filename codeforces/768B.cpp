#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, l, r;
map<ll,ll> mp;
vector<ll> md;

void solve(ll x)
{
    if(x == 1)
        return;
    md.push_back(x%2);
    x /= 2;
    solve(x);
}
int main()
{
    cin >> n >> l >> r; l--;
    if(n == 0)
        return !(cout << 0 << endl);
    solve(n);

    ll in = 1, val = 1;
    mp[in] = val;
    reverse(md.begin(),md.end());
    for(int i = 0; i < md.size(); i++)
    {
        in = 2*in+1; val = val*2+md[i];
        mp[in] = val;
    }

    ll lft = 1, lft_val = 0, rht = 1, rht_val = 0;
    in = 0;
    while(l)
    {
        if(lft == l)
        {
            lft_val += mp[lft];
            break;
        }
        if(2*lft+1 > l)
        {
            lft_val += mp[lft]+md[in];
            l -= (lft+1);
            lft = 1;
            in = 0;
        }
        else if(2*lft+1 <= l)
        {
            lft = 2*lft+1;
            in++;
        }
    }
    in = 0;
    while(r)
    {
        if(rht == r)
        {
            rht_val += mp[rht];
            break;
        }
        if(2*rht+1 > r)
        {
            rht_val += mp[rht]+md[in];
            r -= (rht+1);
            rht = 1;
            in = 0;
        }
        else if(2*rht+1 <= r)
        {
            rht = 2*rht+1;
            in++;
        }
    }
    cout << rht_val - lft_val << endl;
    return 0;
}