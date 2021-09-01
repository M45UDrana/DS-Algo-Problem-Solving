#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, d; cin >> n >> d;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll cur = a[d-1];
    priority_queue<int> pq;
    for(int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        if(i)
            pq.push(x);
        else cur += x;
    }
    ll i = d-2;
    while(!pq.empty() and i >= 0)
    {
        ll x= pq.top();
        pq.pop();
        if(a[i]+x <= cur)
        {
            d--;
            i--;
        }
    }
    cout << d << endl;
    return 0;
}