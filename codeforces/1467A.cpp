#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+7;

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		int n; cin >> n;
		if(n)
		{
			n--;
			cout << 9;
		}
		if(n)
		{
			n--;
			cout << 8;
		}
		if(n)
		{
			n--;
			cout << 9;
		}
		for(int i = 0, c = 0; i < n; i++)
		{
			cout << c;
			c++;
			c %= 10;
		}

		cout << endl;
	}
	return 0;
}