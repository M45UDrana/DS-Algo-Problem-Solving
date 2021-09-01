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
 
int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll n, m; cin >> n >> m;
		ll a[n][m], b[n][m];
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));

		string s[n];
		for(int i = 0; i < n; i++)
			cin >> s[i];
		ll ans = 0;

		for(int i = 0; i < n; i++)
		{
			ll c = 0;
			for(int j = 0; j < m; j++)
			{
				if(s[i][j] == '*')
				{
					c++;
					a[i][j] = c;
				}
				else c = 0;
			}
			c = 0;
			for(int j = m-1; j >= 0; j--)
			{
				if(s[i][j] == '*')
				{
					ans++;
					c++;
					a[i][j] = max(min(a[i][j],c)*2-1, 0LL);
				}
				else c = 0;
			}

			if(i)
			{
				for(int j = 0; j < m; j++)
				{
					if(s[i][j] == '*' and s[i-1][j] == '*')
					{
						b[i][j] = b[i-1][j]+1;
						b[i][j]= min((a[i][j]-1)/2, b[i][j]);
					}
				}
			}

			for(int j = 0; j < m; j++)
			{
				if(a[i][j])
					ans += min((a[i][j]-1)/2, b[i][j]);
			}
		}

		cout << ans << endl;
	}
	return 0;
}