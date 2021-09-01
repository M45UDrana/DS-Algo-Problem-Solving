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
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n; cin >> n;
		vector<ll> v[n+1];
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			v[a[i]].pb(x);
		}
		for(int i = 1; i <= n; i++)
			sort(v[i].begin(),v[i].end(), greater<int>());
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j < v[i].size(); j++)
				v[i][j] += v[i][j-1];
		}
		ll ans[n+1];
		memset(ans, 0, sizeof(ans));
		for(int i = 1; i <= n; i++)
		{
			int sz = v[i].size();
			for(int j = 1; j <= n; j++)
			{
				int x = sz - (sz%j);
				if(x)
					ans[j] += v[i][x-1];
				else break;
			}
		}
		for(int i = 1; i <= n; i++)
			cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}