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
		int n, k; cin >> n >> k;
		int a[n+1];
		a[1] = 1;
		a[n] = n;
		for(int i = 2; i < n; i++)
		{
			if(k)
			{
				a[i] = i+1;
				a[i+1] = i;
				k--;
				i++;
			}
			else a[i] = i;
		}
		if(!k)
		{
			for(int i = 1; i <= n; i++)
				cout << a[i] << " ";
			cout << endl;
		}
		else cout << -1 << endl;
	}
	return 0;
}