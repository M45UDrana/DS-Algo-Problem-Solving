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
	int n, k; cin >> n >> k;
	queue<int> Q;
	map<int,int> mp;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if(mp[x] == 0)
		{
			mp[x] = 1;
			Q.push(x);
		}

		if(Q.size() > k)
		{
			x = Q.front(); Q.pop();
			mp[x] = 0;
		}
	}
	cout << Q.size() << endl;
	vector<int>v;
	while(!Q.empty())
	{
		v.push_back(Q.front());
		Q.pop();
	}
	for(int i = (int)v.size()-1; i >= 0; i--)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}