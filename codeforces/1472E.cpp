#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+7;

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		int n; cin >> n;
		vector<pair<int,int> > v(n), mn(n);
		map<pair<int,int>, int> mp;

		for(int i = 0; i < n; i++)
		{
			cin >> v[i].ff >> v[i].ss;
			if(v[i].ff > v[i].ss)
				swap(v[i].ff, v[i].ss);
			mn[i] = v[i];
			mp[v[i]] = i+1;
		}

		sort(mn.begin(), mn.end());

		int idx[n];
		idx[0] = 0;
		for(int i = 1; i < n; i++)
		{
			idx[i] = idx[i-1];
			if(mn[idx[i]].ss > mn[i].ss)
				idx[i] = i;
		}

		for(int i = 0; i < n; i++)
		{
			int lft = 0, rht = n-1;
			while(lft < rht)
			{
				int md = lft + (rht+1-lft)/2;
				if(mn[md].ff < v[i].ff)
					lft = md;
				else rht = md-1;
			}
			
			int j = idx[lft];
			if(mn[j].ff < v[i].ff and mn[j].ss < 
					v[i].ss)
				cout << mp[mn[j]] << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
	return 0;
}