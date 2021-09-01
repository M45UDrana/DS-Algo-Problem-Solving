#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 2e5+10;
int bit[N];

void upt(int x)
{
	for(;x < N; x += x&(-x)) bit[x]++;
}

int qry(int x)
{
	int sum = 0;
	for(;x > 0; x -= x&(-x)) sum += bit[x];
	return sum;
}

int srh(int x)
{
	ll lft = x, rht = N-1;
	while(lft < rht)
	{
		ll md = (lft+rht)/2;
		if(x+qry(md) > md)
			lft = md+1;
		else rht = md;
	}
	return lft;
}

int main()
{
	int n, q; cin >> n >> q;
	string s; cin >> s;
	s = " " + s;
	set<int>st[125];
	for(int i = 1; i < s.size(); i++)
		st[int(s[i])].insert(i);
	while(q--)
	{
		int l, r; cin >> l >> r;
		char c; cin >> c;
		int xl = srh(l);
		int xr = srh(r);
		auto it = st[int(c)].lower_bound(xl);
		auto it1 = it;
		while(it1 != st[int(c)].end() and *it1 <= xr)
		{
			upt(*it1);
			it1++;
		}
		st[int(c)].erase(it, it1);
	}
	vector<pair<int,char> > v;
	for(char i = '0'; i <= '9'; i++)
	{
		for(auto x:st[int(i)])
			v.pb(mp(x,i));
	}
	for(char i = 'a'; i <= 'z'; i++)
	{
		for(auto x:st[int(i)])
			v.pb(mp(x,i));
	}
	for(char i = 'A'; i <= 'Z'; i++)
	{
		for(auto x:st[int(i)])
			v.pb(mp(x,i));
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
		cout << v[i].ss;
	cout << endl;
	return 0;
}