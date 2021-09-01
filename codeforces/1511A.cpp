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
		int n, ans = 0; cin >> n;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			if(x == 1 or x == 3)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}