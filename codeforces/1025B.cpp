#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll N = 5e4+1;

bool siev[N];
vector<ll> prim;

void SofE()
{
    ll sq = sqrt(N)+0.5;
    for(int i = 4; i < N; i+=2)
        siev[i] = 1;
    for(int i = 3; i <= sq; i += 2)
    {
        if(!siev[i])
            for(int j = i*i; j < N; j += i*2)
                siev[j] = 1;
    }
    for(int i = 2; i < N; i++)
        if(!siev[i])
            prim.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    SofE();
    ll n; cin >> n;
    ll a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    ll prm[N];
    ll m = prim.size();
    for(int i = 0; i < m; i++)
    {
        ll x = prim[i];
        prm[x] = 1;
        for(int j = 0; j < n; j++)
        {
            bool c1 = 0, c2 = 0;
            while(a[j]%x == 0)
            {
                c1 = 1;
                a[j] /= x;
            }
            while(b[j]%x == 0)
            {
                c2 = 1;
                b[j] /= x;
            }
            prm[x] &= (c1 | c2);
            if(!prm[x])
                break;
        }
        if(prm[x])
            return !(cout << x << endl);
    }
    ll ans[2];
    ans[0] = a[0]; ans[1] = b[0];
    for(int i = 1; i < n; i++)
    {
        if(ans[0] != -1)
        {
            if(a[i]%ans[0] == 0 or ans[0]%a[i] == 0)
                ans[0] = min(a[i], ans[0]);
            else if(b[i]%ans[0] == 0 or ans[0]%b[i] == 0)
                ans[0] = min(b[i], ans[0]);
            else ans[0] = -1;
        }
        if(ans[1] != -1)
        {
            if(a[i]%ans[1] == 0 or ans[1]%a[i] == 0)
                ans[1] = min(a[i], ans[1]);
            else if(b[i]%ans[1] == 0 or ans[1]%b[i] == 0)
                ans[1] = min(b[i], ans[1]);
            else ans[1] = -1;
        }
    }
    ll res = max(ans[0], ans[1]);
    if(res == 1)
        res = -1;
    cout << res << endl;
    return 0;
}