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
 
const int N = 2000;

int main()
{
    IO;
	int t; cin >> t;
	while(t--)
	{
		ll n, w; cin >> n >> w;
		vector<pair<ll,ll>>v(n);
		ll hw = (w+1)/2;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i].ff;
			v[i].ss = i+1;
		}
		sort(v.begin(),v.end());
		bool ok = true;
		ll lft = 0, rht = n-1;
		while(lft <= rht and ok)
		{
			ll md = (lft+rht)/2;
			ll sum = 0;
			for(int i = md; i >= 0 and ok; i--)
			{
				sum += v[i].first;
				if(hw <= sum and sum <= w)
				{
					cout << md-i+1 << endl;
					for(int j = i; j <= md; j++)
						cout << v[j].ss << " ";
					cout << endl;
					ok = false;
				}
			}
			if(!ok)
				break;
			else if(sum > w)
				rht = md-1;
			else lft = md+1;
		}
		if(ok)
			cout << -1 << endl;
	}
	return 0;
}