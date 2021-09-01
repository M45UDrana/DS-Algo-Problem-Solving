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
		int cnt[n+1];
		memset(cnt, 0, sizeof(cnt));
		int mx = (n-1)/2;
		for(int i = 1; i <= n; i++)
		{
			for(int j = i+1; j <= n; j++)
			{
				if(i+n/2 == j and n%2 == 0)
				{
					cout << 0 << " ";
				}
				else if(cnt[i] < mx)
				{
					cnt[i]++;
					cout << 1 << " ";
				}
				else if(cnt[j] < mx)
				{
					cnt[j]++;
					cout << -1 << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}