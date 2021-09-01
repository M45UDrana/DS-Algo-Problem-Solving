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
	int Case = 1;
    while(Case--)
    {
		ll n, m, k; cin >> n >> m >> k;
		vector<ll> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		ll sum = 0, ans = 0;
		for(int i = n-1; i >= 0; i--)
		{
			if(sum+v[i] > k)
			{
				m--;
				sum = v[i];
			}
			else sum += v[i];
			if(!m)
				break;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}