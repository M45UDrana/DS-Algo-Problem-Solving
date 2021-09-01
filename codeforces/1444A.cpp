#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll p, q; cin >> p >> q;
		vector<ll> ftr;

		if(p%q)
		{
			cout << p << endl;
			continue;
		}
		
		ll m = q;
		for(ll i = 2; i <= m; i++)
		{
			if(i*i > m)
			{
				ftr.push_back(m);
				break;
			}
			bool ok = false;
			while(m%i == 0)
			{
				m /= i;
				ok = true;
			}

			if(ok)
				ftr.push_back(i);
		}


		ll ans = 0;
		for(int i = 0; i < ftr.size(); i++)
		{
			m = p;
			while(m % ftr[i] == 0)
			{
				m /= ftr[i];
				if(m%q)
				{
					ans = max(ans, m);
					break;
				}
			}
		}
		cout << ans << endl;
	}
    return 0;
}