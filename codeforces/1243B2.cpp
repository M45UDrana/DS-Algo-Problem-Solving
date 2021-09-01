#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

struct pr
{
	int fi, si;
};

int main()
{
    IO;
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		int n; cin >> n;
		string s, t; cin >> s >> t;
		string g = s+t;
		sort(g.begin(),g.end());
		bool ok = true;
		for(int i = 0; i < n*2; i += 2)
			ok &= g[i] == g[i+1];
		if(ok)
			cout << "YES" << endl;
		else 
		{
			cout << "NO" << endl;
			continue;
		}
		vector<pr>v;
		for(int i = 0; i < n; i++)
		{
			if(s[i] == t[i])
				continue;
			bool ok = false;
			for(int j = i+1; j < n; j++)
			{
				if(s[i] == s[j])
				{
					swap(s[j], t[i]);
					v.push_back({j+1,i+1});
					ok = true;
					break;
				}
			}
			if(ok)
				continue;
			for(int j = i+1; j < n; j++)
			{
				if(s[i] == t[j])
				{
					swap(s[j],t[j]);
					swap(s[j],t[i]);
					v.push_back({j+1,j+1});
					v.push_back({j+1,i+1});
					break;
				}
			}
		}
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++)
			cout << v[i].fi << " " << v[i].si << endl;
	}
	return 0;
}