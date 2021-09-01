#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n; cin >> n;
	vector<pair<ll,ll> > v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i].first;
	for(int i = 0; i < n; i++)
		cin >> v[i].second;

	sort(v.begin(), v.end());
	ll cur = 1, sum = 0, ans = 0, cnt = 0;
	priority_queue<ll> pq;
	
	for(int i = 0; i < n; i++)
	{
		while(cur < v[i].first and !pq.empty())
		{
			sum -= pq.top();
			pq.pop();
			cnt--;
			ans += sum;
			cur++;
		}

		pq.push(v[i].second);
		sum += v[i].second;
		cnt++;
		cur = v[i].first;
	}

	while(!pq.empty())
	{
		sum -= pq.top();
		pq.pop();
		ans += sum;
	}
	cout << ans << endl;
    return 0;
}