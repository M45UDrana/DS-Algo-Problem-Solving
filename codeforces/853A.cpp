#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n, k; cin >> n >> k;
    ll a[n+1], b[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    priority_queue<pair<int,int> > pq;
    for(int i = 1; i <= n+k; i++)
    {
        if(i <= n)
            pq.push(make_pair(a[i], i));
        if(i > k)
        {
            pair<int,int> p = pq.top();
            pq.pop();
            b[p.second] = i;
        }
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++)
        ans += (b[i]-i) * a[i];
    cout << ans << endl;
    for(int i = 1; i <= n; i++)
        cout << b[i] << " \n"[i == n];
    return 0;
}