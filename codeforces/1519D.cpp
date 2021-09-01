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
	int n; cin >> n;
	vector<ll>v_a(n), v_b(n), p_a(n), s_a(n),
		p_b(n), s_b(n);

	for(int i = 0; i < n; i++)
		cin >> v_a[i];
	for(int i = 0; i < n; i++)
		cin >> v_b[i];
	for(int i = 0; i < n; i++)
	{
		p_a[i] = s_a[i] = v_a[i]*v_b[i];
	}

	for(int i = 1; i < n; i++)
		p_a[i] += p_a[i-1];

	for(int i = n-2; i >= 0; i--)
		s_a[i] += s_a[i+1];
	ll ans = s_a[0];
	for(int i = 0; i < n; i++)
	{
		int l = i, r = i+1;
		ll res = 0, res1 = 0;
		while(l >= 0 and r < n)
		{
			res += v_a[l]*v_b[r];
			res += v_a[r]*v_b[l];
			if(l > 0)
				res1 += p_a[l-1];
			if(r < n-1)
				res1 += s_a[r+1];
			ans = max(ans, res+res1);
			res1 = 0;
			l--; r++;
		}

		l = i-1; r = i+1;
		res = v_a[i]*v_b[i]; res1 = 0;
		while(l >= 0 and r < n)
		{
			res += v_a[l]*v_b[r];
			res += v_a[r]*v_b[l];
			if(l > 0)
				res1 += p_a[l-1];
			if(r < n-1)
				res1 += s_a[r+1];
			ans = max(ans, res+res1);
			res1 = 0;
			l--; r++;
		}
	}
	cout << ans << endl;
	return 0;
}