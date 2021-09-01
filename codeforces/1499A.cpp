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
		int n, k1, k2; cin >> n >> k1 >> k2;
		int w, b; cin >> w >> b;
		int l1 = n-k1, l2 = n-k2;

		int mnk = min(k1,k2);
		w -= mnk; k1 -= mnk; k2 -= mnk;
		if(w*2 > k1+k2)
		{
			cout << "NO" << endl;
			continue;
		}

		int mnl = min(l1, l2);
		b -= mnl; l1 -= mnl; l2 -= mnl;
		if(b*2 > l1+l2)
		{
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;

	}
	return 0;
}