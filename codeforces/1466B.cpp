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
		int n; cin >> n;
		int a[2*n+7];
		memset(a, 0, sizeof(a));
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a[x]++;
		}
		int ans = 0;
		for(int i = 1; i <= 2*n+1; i++)
		{
			ans += (a[i] > 0);
			if(a[i] > 1)
				a[i+1]++;
		}
		cout << ans << endl;
	}
	return 0;
}