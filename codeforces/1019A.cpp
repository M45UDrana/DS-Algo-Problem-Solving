#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n, m; cin >> n >> m;
	vector<pair<ll,ll> > v;
	int cnt = 0;
	ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		ll p, c; cin >> p >> c;
		if(p == 1)
			cnt++;
		else
		{
			v.push_back({p,c});
			ans += c;
		}
	}

	for(int i = 1; i <= n; i++)
	{
		int vte = cnt, op = i-1;
		
		vector<ll> prt[m+1], tmp;
		for(int j = 0; j < v.size(); j++)
			prt[v[j].first].push_back(v[j].second);

		ll sum = 0;
		for(int j = 2; j <= m; j++)
		{
			sort(prt[j].rbegin(), prt[j].rend());
			while(prt[j].size() > op)
			{
				sum += prt[j].back();
				prt[j].pop_back();
				vte++;
			}
			for(int k = 0; k < prt[j].size(); k++)
				tmp.push_back(prt[j][k]);
		}
		sort(tmp.rbegin(), tmp.rend());

		while(!tmp.empty() and vte < i)
		{
			sum += tmp.back();
			tmp.pop_back();
			vte++;
		}
		if(vte >= i)
			ans = min(sum, ans);
	}
	cout << ans << endl;
    return 0;
}