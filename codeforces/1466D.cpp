#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
 
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
		ll n; cin >> n;
		ll w[n+1], sum = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> w[i];
			sum += w[i];
		}
		int d[N];
		memset(d, 0, sizeof(d));
		for(int i = 1; i < n; i++)
		{
			int u, v; cin >> u >> v;
			d[u]++; d[v]++;
		}

		vector<ll> v;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j < d[i]; j++)
				v.pb(w[i]);
		}

		sort(v.rbegin(), v.rend());
		cout << sum;
		int m = v.size();
		for(int i = 0; i < n-2; i++)
		{
			sum += v[i%m];
			cout << " " << sum;
		}
		cout << endl;
	}
	return 0;
}