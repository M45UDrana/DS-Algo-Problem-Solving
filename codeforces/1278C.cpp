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
		vector<int> v(n+1);
		map<int,int> mp;

		int x = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> v[i];

			if(v[i] == 1)
				x++;
			else x--;
			mp[x] = i;
		}

		for(int i = 1; i <= n; i++)
			cin >> v[i];

		x = 0;
		int ans = mp[x];
		for(int i = n, j = 1; i > 0; i--, j++)
		{
			if(v[i] == 2)
				x++;
			else x--;
			if(mp[x])
				ans = max(ans, mp[x]+j);
			if(!x)
				ans = max(ans, j);
		}
		cout << 2*n - ans << endl;
	}
	return 0;
}