#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int dsu[200005];

int find(int x)
{
	if(x != dsu[x])
		dsu[x] = find(dsu[x]);
   return dsu[x];	
}

int main()
{
    IO;
	int n, m, cur = 1; cin >> n >> m;
	for(int i = 1; i <= n; i++)
		dsu[i] = i;
	vector<int> v(m);
	stack<int> st;
	bool ok = true;
	for(int i = 0; i < m; i++)
	{
		cin >> v[i];
		dsu[v[i]] = v[i]-1;
		if(v[i] == cur)
			cur++;
		else if(st.size())
		{
			if(st.top() > v[i])
				st.push(v[i]);
			else ok = false;
		}
		else st.push(v[i]);
		while(st.size() and st.top() == cur)
		{
			cur++;
			st.pop();
		}
	}
	while(st.size())
	{
		int x = st.top()-1;
		st.pop();
		while(x = find(x))
		{
			v.pb(x);
			dsu[x] = x-1;
			x--;
		}
	}
	int x = n;
	while(x == find(x))
	{
		v.pb(x);
		dsu[x] = x-1;
		x--;
	}
	if(ok)
	{
		for(auto x: v)
			cout << x << " ";
		cout << endl;
	}
	else cout << -1 << endl;
	return 0;
}