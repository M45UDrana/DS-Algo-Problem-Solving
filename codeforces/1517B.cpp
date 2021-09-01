#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e18;

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n, m; cin >> n >> m;
		vector<pair<int,int> > v;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				int x; cin >> x;
				v.pb(mp(x,i));
			}
		}
		sort(v.begin(), v.end());
		
		int a[n][m];
		memset(a, 0, sizeof(a));
		for(int j = 0; j < n*m; j++)
		{
			if(j < m)
			{
				a[v[j].ss][j] = v[j].ff;
			}
			else
			{
				for(int i = 0; i < m; i++)
				{
					if(!a[v[j].ss][i])
					{
						a[v[j].ss][i] = v[j].ff;
						break;
					}
				}
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}