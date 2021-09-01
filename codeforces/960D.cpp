#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = ll(1e18);

int main()
{
    IO;
	ll st[60], end[60], sft1[60], sft2[60];
	memset(sft1, 0, sizeof(sft1));
	memset(sft2, 0, sizeof(sft2));

	st[0] = 1; end[0] = 1;
	for(int i = 1; i < 60; i++)
	{
		st[i] = st[i-1]*2;
		end[i] = end[i-1]*2+1;
	}
	int q; cin >> q;
	while(q--)
	{
		ll t, x; cin >> t >> x;
		if(t == 3)
		{
			int i = 0;
			while(st[i] > x or x > end[i])
				i++;
			bool flg = true;
			while(x)
			{
				if(flg)
				{
					cout << x << " ";
					x += (sft1[i]+sft2[i]) % 
						(end[i]-st[i]+1);
					if(x < st[i])
						x = end[i] - (st[i]-1-x);
					if(x > end[i])
						x = st[i] + (x-1-end[i]);

					x /= 2;
					i--;
					flg = false;
					continue;
				}

				ll res = x-sft1[i];
				if(res < st[i])
					res = end[i] - (st[i]-1-res);
				if(res > end[i])
					res = st[i] + (res-1-end[i]);
				cout << res << " ";

				x += sft2[i];
				if(x < st[i])
					x = end[i] - (st[i]-1-x);
				if(x > end[i])
					x = st[i] + (x-1-end[i]);

				x /= 2;
				i--;
			}
			cout << endl;
		}
		else
		{
			ll k; cin >> k;
			int i = 0;
			while(st[i] > x or x > end[i])
				i++;
			if(t%2)
				(sft1[i] += k) %= (end[i]-st[i]+1);
			else if(i) 
				(sft2[i] += k) %= (end[i]-st[i]+1);
		}
	}
	return 0;
}