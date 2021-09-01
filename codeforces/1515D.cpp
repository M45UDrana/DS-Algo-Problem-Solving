#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e9;

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n, l, r; cin >> n >> l >> r;
		int al[n+1], ar[n+1];
		memset(al, 0, sizeof(al));
		memset(ar, 0, sizeof(ar));
		set<pair<int,int>>sl, sr;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			if(i < l)
			{
				al[x]++;
				sl.insert(mp(x,i));
			}
			else
			{
				ar[x]++;
				sr.insert(mp(x,i));
			}
		}

		vector<pair<int,int>>tmp;
		for(auto it: sl)
		{
			auto in = sr.lower_bound(mp(it.ff,-1));
			if(in != sr.end() and it.ff == in->ff)
			{
				tmp.pb(it);
				sr.erase(in);
				ar[in->ff]--;
			}
		}
		for(int i = 0; i < tmp.size(); i++)
		{
			sl.erase(tmp[i]);
			al[tmp[i].ff]--;
		}
		tmp.clear();

		for(auto it: sr)
		{
			auto in = sl.lower_bound(mp(it.ff,-1));
			if(in != sl.end() and it.ff == in->ff)
			{
				tmp.pb(it);
				sl.erase(in);
				al[in->ff]--;
			}
		}
		for(int i = 0; i < tmp.size(); i++)
		{
			sr.erase(tmp[i]);
			ar[tmp[i].ff]--;
		}
		tmp.clear();
		
		int szl = sl.size(), szr = sr.size(), ans = 0;
		int pl = 0, pr = 0;
		for(int i = 1; i <= n; i++)
		{
			pl += al[i]/2;
		}
		for(int i = 1; i <= n; i++)
		{
			pr += ar[i]/2;
		}
		if(szr > szl)
		{
			ans += szl;
			szr -= szl;
			ans += min(szr/2, pr/2);
			szr -= min(szr, pr);
			ans += szr;
		}
		else
		{
			ans += szr;
			szl -= szr;
			ans += min(szl/2, pl/2);
			szl -= min(szl, pl);
			ans += szl;
		}
		cout << ans << endl;
	}
	return 0;
}