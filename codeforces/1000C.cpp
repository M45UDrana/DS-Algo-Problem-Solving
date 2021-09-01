#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll a[n], b[n];
    vector<ll> seg;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        b[i]++;
        seg.push_back(a[i]);
        seg.push_back(b[i]);
    }

    sort(seg.begin(), seg.end());
    seg.resize(unique(seg.begin(),seg.end())-seg.begin());

    vector<ll>in(2*n+5, 0), cnt(n+1, 0);
    for(int i = 0,x; i < n; i++)
    {
        x = lower_bound(seg.begin(),seg.end(),a[i])
            -seg.begin();
        in[x]++;
        x = lower_bound(seg.begin(),seg.end(),b[i])
            -seg.begin();
        in[x]--;
    }

    for(int i = 0, x = 0; i < 2*n; i++)
    {
        x += in[i];
        in[i] = x;
    }

    for(int i = 0; i < seg.size()-1; i++)
        cnt[in[i]] += seg[i+1] - seg[i];

    for(int i = 1; i <= n; i++)
        cout << cnt[i] << " ";
    cout << endl;
    return 0;
}