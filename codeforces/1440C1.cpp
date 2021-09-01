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
 
vector<pii> v;

void cng(int i, int j , int n, int m)
{
	vector<pii> p;
	p.pb(mp(i,j));
	if(i+1 < n)
	{
		p.pb(mp(i+1, j));
		if(j+1 < m)
		{
			p.pb(mp(i, j+1));
			p.pb(mp(i+1, j+1));
		}
		else 
		{
			p.pb(mp(i, j-1));
			p.pb(mp(i+1, j-1));
		}
	}
	else
	{
		p.pb(mp(i-1, j));
		if(j+1 < m)
		{
			p.pb(mp(i, j+1));
			p.pb(mp(i-1, j+1));
		}
		else
		{
			p.pb(mp(i, j-1));
			p.pb(mp(i-1, j-1));
		}
	}
	v.pb(p[0]);
	v.pb(p[1]);
	v.pb(p[2]);
	v.pb(p[0]);
	v.pb(p[1]);
	v.pb(p[3]);
	v.pb(p[0]);
	v.pb(p[2]);
	v.pb(p[3]);
}

int main()
{
    IO;
	int t; cin >> t;
	while(t--)
	{
		int n, m; 
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				char c; cin >> c;
				if(c == '1')
					a[i][j] = 1;
				else a[i][j] = 0;
			}
		}

		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(a[i][j])
				{
					a[i][j] = 1;
					cng(i, j, n, m);
				}
			}
		}

		int k = v.size()/3;
		cout << k << endl;
		for(int i = 0; i < k*3; i++)
		{
			cout << v[i].ff+1 << " " << v[i].ss+1<< " ";
			if((i+1)%3 == 0)
				cout << endl;
		}
		v.clear();
	}
	return 0;
}