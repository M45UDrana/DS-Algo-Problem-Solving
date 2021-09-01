#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, m; cin >> n >> m;
        map<ll, int>mp;
        ll sum = 0;
        for(int i = 0; i < m; i++)
        {
            ll x; cin >> x;
            mp[x]++;
            sum += x;
        }
        if(sum < n)
        {
            cout << -1 << endl;
            continue;
        }
        ll n1 = n;
        vector<int>v;
        while(n1)
        {
            v.push_back(n1&1);
            n1 = n1 >> 1;
        }
        ll ans = 0;
        for(ll i = 0; i < v.size(); i++)
        {
            ll x = pow(2, i);
            ll y = pow(2, i+1);
            if(v[i])
            {
                if(mp[x] > 0)
                    mp[x]--;
                else
                {
                    ll j = 1;
                    while(1)
                    {
                        ll z = pow(2, i+j);
                        if(mp[z] > 0)
                        {
                            mp[x] = (z/x)-1;
                            mp[z] -= 1;
                            ans += j;
                            break;
                        }
                        j++;
                    }
                }
            }
            mp[y] += (mp[x]/2);
        }
        cout << ans << endl;
    }
    return 0;
}