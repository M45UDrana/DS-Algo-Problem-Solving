#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);
 
const ll inf = 1e18;
 
int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n, k; cin >> n >> k;
		int idx[k];
		vector<ll>v(n+1, inf);
		for(int i = 0; i < k; i++)
			cin >> idx[i];
		for(int i = 0; i < k; i++)
		{
			cin >> v[idx[i]];
		}
		ll cur = inf;
		for(int i = 1; i <= n; i++)
		{
			v[i] = min(v[i], cur);
			cur = v[i]+1;
		}
		cur = inf;
		for(int i = n; i > 0; i--)
		{
			v[i] = min(v[i], cur);
			cur = v[i]+1;
		}
		for(int i = 1; i <= n; i++)
			cout << v[i] << " \n"[i==n];
	}
	return 0;
}