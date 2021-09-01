#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e15;

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n; cin >> n;
		string s; cin >> s;
		s = " " + s;
		ll lft[n+5], rht[n+5];
		memset(lft, 0, sizeof(lft));
		memset(rht, 0, sizeof(rht));
		for(int i = 1, cnt = 0; i <= n; i++)
		{
			if(s[i] == '*')
			{
				cnt++;
				lft[i] = lft[i-1];
			}
			else
			{
				lft[i] = lft[i-1]+cnt;
			}
		}

		for(int i = n, cnt = 0; i > 0; i--)
		{
			if(s[i] == '*')
			{
				cnt++;
				rht[i] = rht[i+1];
			}
			else
			{
				rht[i] = rht[i+1]+cnt;
			}
		}
		ll ans = inf;
		for(int i = 1; i < n; i++)
		{
			ans = min(ans, lft[i]+rht[i+1]);
		}
		cout << ans << endl;
	}
	return 0;
}