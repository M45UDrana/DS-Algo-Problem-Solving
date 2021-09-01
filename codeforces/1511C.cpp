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
	int n, q; cin >> n >> q;
	int clr[51];
	memset(clr, 0, sizeof(clr));
	for(int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		if(!clr[x])
			clr[x] = i;
	}
	while(q--)
	{
		int c; cin >> c;
		cout << clr[c] << " ";
		for(int i = 1; i <= 50; i++)
			if(clr[i] < clr[c])
				clr[i]++;
		clr[c] = 1;
	}
	return 0;
}