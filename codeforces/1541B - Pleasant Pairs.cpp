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
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n+1], pos[2*n+1];
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			pos[a[i]] = i;
		}
		int ans = 0;
		for(int i = 2; i <= n; i++)
		{
			int mx = i+i-1;
			int nd = mx/a[i];
			while(nd*a[i] > i)
			{
				int j = (nd*a[i]) - i;
				if(a[j] == nd)
					ans++;
				nd--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
