#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

const int N = 2e5+7;
int n; 
int ft[N];

int query(int idx)
{
    int sum = 0;
    while(idx)
    {
        sum += ft[idx];
        idx -= idx & (-idx);
    }
    return sum;
}

int update(int idx)
{
    while(idx <= n)
    {
        ft[idx]++;
        idx += idx & (-idx);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    vector<pair<pair<int,int>,int> > v(n);
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].F.F >> v[i].F.S;
        v[i].S = i;
        mp[v[i].F.S] = 1;
    }

    int x = 1;
    for(auto it = mp.begin(); it != mp.end(); it++)
        mp[it->F] = x++;

    sort(v.begin(), v.end());
    int ans[n];
    for(int i = n-1; i >= 0; i--)
    {
        ans[v[i].S] = query(mp[v[i].F.S]);
        update(mp[v[i].F.S]);
    }
    for(int i = 0; i < n; i++)
        cout << ans[i] << '\n';
    return 0;
}