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
		int n; cin >> n;
		cout << n << endl;
		for(int i = 1; i <= n; i++)
			cout << i << " \n"[i==n];
	}
	return 0;
}