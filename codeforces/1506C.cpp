#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int inf = 1e9+7;

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		string s, g; cin >> s >> g;
		int n = s.size(), m = g.size();
		int ans = n+m;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				for(int l = 0; l+i<n and l+j<m; l++)
				{
					if(s[i+l] == g[j+l])
						ans = min(ans, (n+m)-2*(l+1));
					else break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}