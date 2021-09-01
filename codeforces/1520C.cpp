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
		if(n == 2)
		{
			cout << -1 << endl;
			continue;
		}
		for(int i = 0, k = 1; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cout << k << " ";
				k += 2;
				if(k > n*n)
					k = 2;
			}
			cout << endl;
		}
	}
	return 0;
}