#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);


int main()
{
	string s; cin >> s;
	int n = s.size();
	vector<pair<char,int> > v, v1;
	for(int i = 0, cnt = 1; i < n; i++)
	{
		if(i)
		{
			if(s[i] != s[i-1])
			{
				v.pb(mp(s[i-1], cnt));
				cnt = 1;
			}
			else cnt++;
		}

		if(i+1 == n)
		{
			v.pb(mp(s[i], cnt));
		}
	}
	int ans = 0;
	while(v.size() > 1)
	{
		int m = v.size();
		for(int i = 0; i < m; i++)
		{
			if(!i or i == m-1)
			{
				v[i].ss--;
			}
			else v[i].ss -= 2;
		}

		for(int i = 0; i < m; i++)
		{
			if(v[i].ss > 0)
			{
				if(v1.size() and (v1.back()).ff == 
						v[i].ff)
				{
					(v1.back()).ss += v[i].ss;
				}
				else v1.pb(v[i]);
			}
		}
		ans++;
		v = v1;
		v1.clear();
	}
	cout << ans << endl;
	return 0;
}