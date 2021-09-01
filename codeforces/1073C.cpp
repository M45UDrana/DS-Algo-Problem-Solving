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
	int n; cin >> n;
	string s; cin >> s;
	s = " " + s;
	int X, Y; cin >> X >> Y;
	int d = abs(X) + abs(Y);
	if(n < d or n%2 != d%2)
		return !(cout << -1 << endl);

	vector<pair<int,int>> pre(n+5, {0,0}), suf(n+5, {0,0});
	for(int i = 1; i <= n; i++)
	{
		pre[i] = pre[i-1];
		if(s[i] == 'R')
			pre[i].ff++;
		else if(s[i] == 'L')
			pre[i].ff--;
		else if(s[i] == 'U')
			pre[i].ss++;
		else pre[i].ss--;
	}

	for(int i = n; i > 0; i--)
	{
		suf[i] = suf[i+1];
		if(s[i] == 'R')
			suf[i].ff++;
		else if(s[i] == 'L')
			suf[i].ff--;
		else if(s[i] == 'U')
			suf[i].ss++;
		else suf[i].ss--;
	}

	ll lft = 0, rht = n;
	while(lft < rht)
	{
		ll seg = (lft+rht)/2;
		bool ok = false;
		for(int i = 0; i+seg <= n; i++)
		{
			d = abs(X-(pre[i].ff+suf[i+seg+1].ff)) + 
				abs(Y-(pre[i].ss+suf[i+seg+1].ss));
			if(d <= seg and d%2 == seg%2)
				ok = true;
		}
		if(ok)
			rht = seg;
		else lft = seg+1;
	}
	cout << lft << endl;
	return 0;
}