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
	ll n, k, sz = 0; cin >> n >> k;
	map<ll,int> MP;
	ll p = 0;
	while(n)
	{
		if(n&1)
		{
			MP[p]++;
			sz++;
		}
		p++;
		n >>= 1;
	}
	if(sz > k)
		return !(cout << "No" << endl);

	while(sz < k)
	{
		auto x = MP.end();
		x--;
		if(x->second <= (k-sz))
		{
			MP[x->first]--;
			MP[x->first-1] += 2;
			sz++;
			if(x->second == 0)
				MP.erase(x);
		}
		else
		{
			x = MP.begin();
			MP[x->first]--;
			MP[x->first-1] += 2;
			sz++;
		}
	}

	cout << "Yes" << endl;

	auto x = MP.end();
	while(1)
	{
		x--;
		while(x->second)
		{
			cout << x->first << " ";
			x->second--;
		}
		if(x == MP.begin())
			break;
	}
	cout << endl;
	return 0;
}