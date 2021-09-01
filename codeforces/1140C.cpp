#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n, k; cin >> n >> k;
	vector<pair<ll,ll> > v(n);

	for(int i = 0; i < n; i++)
		cin >> v[i].second >> v[i].first;
	sort(v.rbegin(), v.rend());

	ll ans = 0, sum = 0;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	for(int i = 0; i < n; i++)
	{
		pq.push(v[i].second);
		sum += v[i].second;
		if(pq.size() > k)
		{
			sum -= pq.top();
			pq.pop();
		}
		ans = max(ans, v[i].first*sum);
	}
	cout << ans << endl;
    return 0;
}