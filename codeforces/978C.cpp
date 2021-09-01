#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m; cin >> n >> m;
    ll dor[n];
    for(int i = 0; i < n; i++)
    {
        cin >> dor[i];
        if(i)
            dor[i] += dor[i-1];
    }
    ll x, i = 0;
    while(m--)
    {
        cin >> x;
        while(x > dor[i])
        {
            i++;
        }
        if(i)
            cout << i+1 << " " << x - dor[i-1] << endl;
        else cout << i+1 << " " << x << endl;
    }
    return 0;
}