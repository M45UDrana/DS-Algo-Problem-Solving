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
	ll n, m, r, k; cin >> n >> m >> r >> k;
	long double numb = (n-r+1)*(m-r+1), sum = 0;
	vector<long double> v;
	map<pair<int,int>, int> MP;

	/*
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			ll x = min(i+r-1,n)-max(i-1, r-1);
			ll y = min(j+r-1,m)-max(j-1, r-1);
			v.pb(x*y);
		}
	}
	sort(v.begin(),v.end(), greater<long double>());
	for(int i = 0; i < k; i++)
		cout << v[i] << " ";
	cout << endl;
	v.clear();
	*/

	ll rw = (n+1)/2, cl = (m+1)/2;
	for(ll i = 1; i <= n; i++)
	{
		if(MP[mp(i,cl)] == 0)
		{
			ll x = min(i+r-1,n)-max(i-1, r-1);
			ll y = min(cl+r-1,m)-max(cl-1, r-1);
			v.pb(x*y);
			MP[mp(i,cl)] = 1;
		}
	}
	for(ll j = 1; j <= m; j++)
	{
		if(MP[mp(rw,j)] == 0)
		{
			ll x = min(rw+r-1,n)-max(rw-1, r-1);
			ll y = min(j+r-1,m)-max(j-1, r-1);
			v.pb(x*y);
			MP[mp(rw,j)] = 1;
		}
	}
	ll l = 1;
	while(v.size() < max({n,m,k})*3)
	{
		for(ll i = 1; i <= n; i++)
		{
			ll x = min(i+r-1,n)-max(i-1, r-1), y;
			if(MP[mp(i, cl-1)] == 0)
			{
				y = min((cl-l)+r-1,m)-max((cl-l)-1, r-1);
				v.pb(x*y);
				MP[mp(i, cl-l)] = 1;
			}
			if(MP[mp(i, cl+1)] == 0)
			{
				y = min((cl+l)+r-1,m)-max((cl+l)-1, r-1);
				v.pb(x*y);
				MP[mp(i, cl+l)] = 1;
			}
		}
		for(ll j = 1; j <= m; j++)
		{
			ll y = min(j+r-1,m)-max(j-1, r-1), x;
			if(MP[mp(rw-l,j)] == 0)
			{
				x = min((rw-l)+r-1,n)-max((rw-l)-1, r-1);
				v.pb(x*y);
				MP[mp(rw-l,j)] = 1;
			}
			if(MP[mp(rw+l,j)] == 0)
			{
				x = min((rw+l)+r-1,n)-max((rw+l)-1, r-1);
				v.pb(x*y);
				MP[mp(rw+l,j)] = 1;
			}
		}
		l++;
	}

	sort(v.begin(),v.end(), greater<long double>());

	for(int i = 0; i < k; i++)
		sum += v[i];
	cout << setprecision(20) << sum / numb << endl;
	return 0;
}