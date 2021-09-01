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
	int n, k; cin >> n >> k;
	set<int>st[n+1];
	for(int i = 1; i < n; i++)
	{
		int u, v; cin >> u >> v;
		st[u].insert(v);
		st[v].insert(u);
	}
	int initSize[n+1];
	set<int> hog;
	vector<int> child;
	for(int i = 1; i <= n; i++)
	{
		initSize[i] = st[i].size();
		if(initSize[i] == 1)
			child.pb(i);
	}

	bool ok = true;
	int Mhog = 0;
	while(ok and child.size())
	{
		for(int i = 0; i < child.size(); i++)
		{
			int v = child[i];
			if(st[v].size() == 0)
			{
				ok = false;
				break;
			}
			int u = *(st[child[i]].begin());
			st[u].erase(v);
			st[v].erase(u);
			hog.insert(u);
		}
		child.clear();
		if(hog.size() == 1)
		{
			if(initSize[*(hog.begin())] < 3)
				ok = false;
			else Mhog++;
			break;
		}
		for(auto x: hog)
		{
			if(initSize[x] < 4 or st[x].size() != 1)
				ok = false;
			child.pb(x);
		}
		hog.clear();
		Mhog++;
	}

	if(Mhog != k)
		ok = false;

	if(ok)
		cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;
}