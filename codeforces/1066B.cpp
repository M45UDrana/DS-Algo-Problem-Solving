#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+7;

int main()
{
    IO;
    int t = 1;
    while(t--)
    {
		int n, r; cin >> n >> r;

		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];

		int visit[n];
		memset(visit, 0, sizeof(visit));

		bool ok = true;
		int ans = 0;

		for(int i = 0; i < n; i++)
		{
			if(visit[i])
				continue;
			int m = min(n, i+r);
			int idx = -1;
			for(int j = i; j < m; j++)
				if(a[j])
					idx = j;

			if(idx != -1)
			{
				int k = max(0, idx-r+1);
				for(; k < min(idx+r, n); k++)
					visit[k] = true;
				ans++;
			}

			if(visit[i])
				continue;

			m = max(0, i-r+1);
			for(int j = i; j >= m; j--)
			{
				if(a[j])
				{
					for(int k = j; k < min(j+r, n); k++)
						visit[k] = true;
					ans++;
					break;
				}
			}
			if(!visit[i])
				ok = false;
		}
		if(!ok)
			ans = -1;
		cout << ans << endl;
	}
	return 0;
}