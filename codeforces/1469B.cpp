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
		int a[n], mxa = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(i)
				a[i] += a[i-1];
			mxa = max(mxa, a[i]);
		}

		int m; cin >> m;
		int b[m], mxb = 0;
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
			if(i)
				b[i] += b[i-1];
			mxb = max(mxb, b[i]);
		}
		cout << mxa + mxb << endl;

	}
	return 0;
}