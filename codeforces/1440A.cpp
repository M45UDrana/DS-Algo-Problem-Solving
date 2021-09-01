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
 
const int N = 2000;

int main()
{
    IO;
	int t; cin >> t;
	while(t--)
	{
		int n, c0, c1, h;
	   	cin >> n >> c0 >> c1 >> h;
		string s; cin >> s;
		int cnt0 = 0, cnt1 = 0;
		for(int i = 0;i < n; i++)
		{
			if(s[i] == '0')
				cnt0++;
			else cnt1++;
		}
		int ans = c0*cnt0 + c1*cnt1;
		ans = min(ans, n*c0+cnt1*h);
		ans = min(ans, n*c1+cnt0*h);
		cout << ans << endl;
	}
	return 0;
}