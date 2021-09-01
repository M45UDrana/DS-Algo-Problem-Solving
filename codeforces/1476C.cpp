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
		int c[n], a[n], b[n];
		for(int i = 0; i < n; i++)
			cin >> c[i];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		int v[n];
		for(int i = 1; i < n; i++)
		{
			if(a[i] > b[i])
				swap(a[i],b[i]);

			v[i-1] = a[i]+c[i-1]-b[i]+1;
			if(a[i]==b[i])
				v[i-1] = 1;

			if(i == n-1)
				v[i] = c[i];
		}
		int cur = b[1]-a[1]+1;
		int ans = cur;
		for(int i = 1; i < n; i++)
		{
			ans = max(ans, cur+c[i]);
			cur += v[i];
			if(v[i] == 1)
				cur = 1;
		}
		cout << ans << endl;
	}
	return 0;
}