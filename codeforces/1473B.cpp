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
	cin >> Case;
    while(Case--)
    {
		string s, g; cin >> s >> g;
		if(s.size() < g.size())
			swap(s, g);
		int n = s.size(), m = g.size();
		int k = n*m/__gcd(n,m);
		string ans = "";
		while(ans.size() < k)
			ans += s;

		bool ok = true;
		for(int i = 0; i < ans.size(); i++)
		{
			ok &= ans[i] == s[i%n];
			ok &= ans[i] == g[i%m];
		}
		if(ok)
			cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}