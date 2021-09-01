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
		int h, n; cin >> h >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		v.push_back(0);
		int cur = h, flg = 0, ans = 0;
		for(int i = 0; i < n; i++)
		{
			if(flg)
			{
				cur = v[i]-1;
				flg ^= 1;
			}
			else 
			{
				if(cur != v[i])
				{
					ans++;
					cur = v[i];
					i--;
				}
				else cur = v[i]-1;
				flg ^= 1;
			}
		}	
		if(cur and !flg)
			ans++;
		cout << ans << endl;
	}
	return 0;
}