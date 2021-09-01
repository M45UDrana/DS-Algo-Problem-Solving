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
		int n; cin >> n;
		int a[n+5];
		memset(a, 0, sizeof(a));
		for(int i = 1; i <= n; i++)
		{
			int x; cin >> x;
			a[i+1]--;
			int y = max(1, i-x+1);
			a[y]++;
		}
		for(int i = 1, x = 0; i <= n; i++)
		{
			x += a[i];
			a[i] = x;
		}
		for(int i = 1; i <= n; i++)
			cout << bool(a[i]) << " ";
		cout << endl;
	}
	return 0;
}