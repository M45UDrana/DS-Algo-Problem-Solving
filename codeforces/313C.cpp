#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    ll n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<ll>());
    for(int i = 1; i < n; i++)
        v[i] += v[i-1];
    ll sum = 0;
    int k = 1;
    while(k <= n)
    {
        sum += v[k-1];
        k *= 4;
    }
    cout << sum << endl;
    return 0;
}