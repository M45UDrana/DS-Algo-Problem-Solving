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
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		if(n%2)
		{
			for(int i = 1; i <= n; i += 2)
			{
				if(i+2 == n)
				{
					d(i+2, i, i+1);
					break;
				}
				cout << i+1 << " " << i << " ";
			}
		}
		else
		{
			for(int i = 1; i <= n; i += 2)
			{
				cout << i+1 << " " << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}