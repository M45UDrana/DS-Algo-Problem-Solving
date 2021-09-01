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
	s += "+++++";
	int m; cin >> m;
	int dp[2][n+5];
	memset(dp, 0, sizeof(dp));
	for(int i = n-1; i >= 0; i--)
	{
		if(s[i] == 'a' or s[i] == '?')
			dp[0][i] = 1 + dp[0][i+2];
		if(s[i+1] == 'b' or s[i+1] == '?')
			dp[1][i] = 1 + dp[1][i+2];
	}
	int cost[2][n+5];
	memset(cost, 0, sizeof(cost));
	for(int i = 0, cnt = 0, l = 0; i < n; i++)
	{
		if(s[i] == '?')
			cnt++;
		if(i-l+1 == m)
		{
			if(dp[0][l] >= (m+1)/2 and dp[1][l] >= m/2)
			{
				cost[0][l] = cnt;
				cost[1][l] = 1;
			}
			if(s[l] == '?')
				cnt--;
			l++;
		}
	}
	memset(dp, 0, sizeof(dp));
	pair<int,int> ans = {0,0};
	for(int i = 0; i < n; i++)
	{
		if(i+m-1 < n)
		{
			dp[0][i+m-1] = ans.ff + cost[0][i];
			dp[1][i+m-1] = ans.ss + cost[1][i];
		}
		if(ans.ss < dp[1][i])
		{
			ans.ff = dp[0][i];
			ans.ss = dp[1][i];
		}
		else if(ans.ss == dp[1][i])
			ans.ff = min(ans.ff, dp[0][i]);
	}
	cout << ans.ff << endl;

	return 0;
}