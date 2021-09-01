#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e9+7;

int main()
{
    int n, k; cin >> n >> k;
    int m = n/k;
    int a[m], b[m];
    for(int i = 0; i < m; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int num = 0;
    for(int i = 0; i < k; i++)
        num = (num*10) + 9;
    ll res = 1;
    int kk = k-1;
    for(int i = 0; i < m; i++)
    {
        ll lnum = 1, unum = 1;
        for(int i = 1; i < k; i++)
        {
            lnum *= 10;
            unum *= 10;
        }
        lnum *= b[i];
        unum = (num%unum) + lnum;
        lnum = max(lnum-1, 0LL);
        ll r = ((num / a[i])) - ((unum / a[i]) - (lnum/a[i]));
        if(b[i] > 0)
            r++;
        res = (res*r)%mod;
    }
    cout << res << endl;
    return 0;
}