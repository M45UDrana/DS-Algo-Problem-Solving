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
    IO;
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		int n; cin >> n;
		int a[n+1];
		memset(a, 0, sizeof(a));
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a[x]++;
			ans = max(ans, a[x]);
		}
		cout << ans << endl;
	}
	return 0;
}