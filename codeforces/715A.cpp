#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    for(ll k = 1; k <= n; k++)
    {
        if(k == 1)
            cout << 2 << endl;
        else
            cout << k*(k+1)*(k+1) - (k-1) << endl;
    }
    return 0;
}