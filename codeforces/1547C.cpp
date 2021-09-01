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
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int k, n, m; cin >> k >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < m; i++)
			cin >> b[i];
		vector<int> ans;
		int it1 = 0, it2 = 0;
		for(int i = 0; i < n+m; i++)
		{
			if(it1 < n)
			{
				if(a[it1] == 0)
				{
					ans.pb(0);
					k++;
					it1++;
				}
				else if(a[it1] <= k)
				{
					ans.pb(a[it1]);
					it1++;
				}
			}
			if(it2 < m)
			{
				if(b[it2] == 0)
				{
					ans.pb(0);
					k++;
					it2++;
				}
				else if(b[it2] <= k)
				{
					ans.pb(b[it2]);
					it2++;
				}
			}
		}
		if(it1 == n and it2 == m)
		{
			for(int i = 0; i < ans.size(); i++)
				cout << ans[i] << " ";
			cout << endl;
		}
		else cout << -1 << endl;
	}
	return 0;
}