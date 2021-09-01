#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

bool iscurve(char a, char b)
{
	if(a == '1' or a == '2')
		return false;
	if(b == '1' or b == '2')
		return false;
	return true;
}

int main()
{
    IO;
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		int n; cin >> n;
		string s[2]; cin >> s[0] >> s[1];
		s[0] = " " + s[0]; s[1] = " " + s[1];
		int dp[2][n+2];
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1;
		for(int i = 1; i <= n; i++)
		{
			if(iscurve(s[0][i], s[1][i]))
			{
				dp[0][i] = dp[1][i-1];
				dp[1][i] = dp[0][i-1];
			}
			else
			{
				if(!iscurve(s[0][i], s[0][i]))
					dp[0][i] = dp[0][i-1];
				if(!iscurve(s[1][i], s[1][i]))
					dp[1][i] = dp[1][i-1];
			}
		}
		if(dp[1][n])
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}