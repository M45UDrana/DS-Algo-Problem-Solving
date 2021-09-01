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
 
const int N = 2000;

int main()
{
    IO;
	int t; cin >> t;
	while(t--)
	{	
		int n, m; cin >> n >> m;
		n *= m;
		int a[n];
		int cnt = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] < 0)
			{
				cnt++;
				a[i] = abs(a[i]);
			}
		}
		sort(a, a+n);
		int sum = 0;
		for(int i = 1; i < n; i++)
			sum += abs(a[i]);

		if(cnt%2)
		a[0] *= -1;
		cout << sum+a[0] << endl;
	}
	return 0;
}