#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int t; cin >> t; 
	while(t--)
	{
		int n; cin >> n;
		vector<pair<int,int> > v(n);
		int idx[n];

		for(int i = 0; i < n; i++)
		{
			cin >> v[i].first;
			v[i].second = i;
		}
		for(int i = 0; i < n; i++)
			cin >> idx[i];

		sort(v.begin(), v.end());

		ll m = 0;
		while(v.size())
		{
			pair<int,int> p = v.back();

			if(p.first > m + idx[p.second])
			{
				v.pop_back();
				m += idx[p.second];
			}
			else break;
		}

		if(v.size())
		{
			m = max(m,ll( v[v.size()-1].first));
		}

		cout << m << endl;
	}
    return 0;
}