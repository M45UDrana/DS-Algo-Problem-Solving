#include <bits/stdc++.h>

using namespace std;
const int inf = 2e2+7;

int main()
{
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	bool used[n];
	memset(used, 0, sizeof(used));

	vector<int> last(n,inf), cur(n, inf);

	priority_queue<pair<int,int>, vector<pair<int,int>>,
	greater<pair<int,int> >	> pq;
	for(int i = 0; i < k and i < n; i++)
	{
		last[i] = 0;
		cur[i] = a[i];
		pq.push({a[i],i});
	}

	int st = 0, m = 0;
	while(!pq.empty())
	{
		pair<int,int> p = pq.top();
		pq.pop();
		int d = cur[p.second]-last[p.second];
		for(int i = 0; i < n; i++)
		{
			if(last[i] < st and st <= min(last[i]+d,
						cur[i]))
				used[i] = 1;
			last[i] += d;
		}
		cur[p.second] = inf;
		last[p.second] = inf;
		m++;
		st = ((double(m)/double(n)) * 100.00) + 0.5;
		if(k < n)
		{
			last[k] = 0;
			cur[k] = a[k];
			pq.push({p.first+a[k], k});
			k++;
		}
/*	for(int i = 0; i < n; i++)
		cout << last[i] << " \n"[i+1==n];
	for(int i = 0; i < n; i++)
		cout << cur[i] << " \n"[i+1==n];*/
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
		ans += used[i];
	cout << ans << endl;
    return 0;
}