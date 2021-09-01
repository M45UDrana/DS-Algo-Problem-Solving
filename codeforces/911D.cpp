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
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int parity = 0;
	for(int i = 0; i < n; i++)
		for(int j = i+1; j < n; j++)
			if(a[j] < a[i])
				(parity += 1) %= 2;
	int q; cin >> q;
	while(q--)
	{
		int l, r; cin >> l >> r;
		(parity += (r-l+1)/2) %= 2;
		if(parity)
			cout << "odd" << endl;
		else cout << "even" << endl;
	}
	return 0;
}