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
    IO;
	set<pair<int,int> > st;
	int n; cin >> n;
	pair<int,int> p;
	for(int i = 0; i < n; i++)
	{
		cin >> p.ff >> p.ss;
		if(!i)
		{
			st.insert(p);
			cout << st.size() << " ";
			continue;
		}
		auto x = st.lower_bound(mp(p.ss+1, -1));
		vector<pair<int,int>>v;
		if(x != st.begin())
			x--;
		while(x->ff <= p.ss and x->ss >= p.ff)
		{
			v.pb(*x);
			if(x == st.begin())
				break;
			x--;
		}
		for(int j = 0; j < v.size(); j++)
		{
			st.erase(v[j]);
			p.ff = min(p.ff, v[j].ff);
			p.ss = max(p.ss, v[j].ss);
		}
		st.insert(p);
		cout << st.size() << " ";
	}
	cout << endl;
	return 0;
}