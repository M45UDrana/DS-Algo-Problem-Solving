#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+10;
int Bit[N][26];
string s;

void add(int i, int j)
{
	while(i <= N)
	{
		Bit[i][j]++;
		i += i&-i;
	}
}

void sub(int i, int j)
{
	while(i <= N)
	{
		Bit[i][j]--;
		i += i&-i;
	}
}

void build(int n)
{
	for(int i = 1; i < n; i++)
		add(i, s[i]-'a');
}

void res(int l, int r)
{
	int ans[26];
	memset(ans, 0, sizeof(ans));

	while(r > 0)
	{
		for(int i = 0; i < 26; i++)
			ans[i] += Bit[r][i];
		r -= r&-r;
	}

	l--;
	while(l > 0)
	{
		for(int i = 0; i < 26; i++)
			ans[i] -= Bit[l][i];
		l -= l&-l;
	}

	int cnt = 0;
	for(int i = 0; i < 26; i++)
		cnt += ans[i] > 0;
	cout << cnt << endl;
}

void show(int n, int m)
{
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			cout << Bit[i][j] << " ";
		cout << endl;
	}
}

int main()
{
    IO;

	cin >> s;
	s = " " + s;
	build(s.size());

	int t; cin >> t;
	while(t--)
	{
		int q; cin >> q;
		if(q%2)
		{
			int pos; cin >> pos;
			char c; cin >> c;
			sub(pos, s[pos]-'a');
			add(pos, c-'a');
			s[pos] = c;
		}
		else
		{
			int l, r; cin >> l >> r;
			res(l, r);
		}
	}


	return 0;
}