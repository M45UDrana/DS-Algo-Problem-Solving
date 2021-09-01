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
		int n, m, k; cin >> n >> m >> k;
		int a[k], b[k], cnta[n+1], cntb[m+1];
		memset(cnta, 0, sizeof(cnta));
		memset(cntb, 0, sizeof(cntb));
		for(int i = 0; i < k; i++)
		{
			cin >> a[i];
			cnta[a[i]]++;
		}
		for(int i = 0; i < k; i++)
		{
			cin >> b[i];
			cntb[b[i]]++;
		}
		ll ans = 0;
		for(int i = 0; i < k; i++)
		{
			ans += k - (cnta[a[i]]+cntb[b[i]]-1);
		}
		cout << ans / 2 << endl;
	}
	return 0;
}