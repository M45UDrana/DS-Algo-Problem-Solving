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
		ll n, x; cin >> n >> x;
		vector<pair<ll,ll> >v;

		for(int i = 0; i < n; i++)
		{
			ll num; cin >> num;
			v.pb(mp(num, 1));
		}
		ll sum = 0;

		bool flg = false;
		for(int i = 0; i < v.size(); i++)
		{
			sum += v[i].ff*v[i].ss;

			if(v[i].ff%x == 0 and !flg)
			{
				v.pb(mp(v[i].ff/x, x*v[i].ss));
			}
			else flg = true;
		}
		cout << sum << endl;
	}
	return 0;
}