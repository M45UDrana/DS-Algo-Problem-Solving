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
		int n, k; cin >> n >> k;
		string s; cin >> s;
		vector<int> dp(n, inf);
		int ans = 1;
		for(int i = 0; i < n; i++)
		{
			if(s[i] == '*')
			{
				for(int j = 0; j < i; j++)
				{
					if(s[j] == '*' and i-j <= k)
					{
						dp[i] = min(dp[i], dp[j]+1);
					}
				}
				if(dp[i] > n)
					dp[i] = 1;
				ans = dp[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}