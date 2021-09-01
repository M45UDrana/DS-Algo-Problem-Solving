#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, k; cin >> n >> k;
    for(ll i = 0; i < n; i++)
    {
        ll a = pow(2, i);
        if((k-a)%(a*2) == 0)
        {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}