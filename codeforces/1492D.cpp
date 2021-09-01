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
	int a, b, k; cin >> a >> b >> k;
	if(!b or k > a or (k and b == 1))
		return !(cout << "No" << endl);
	b--;
	cout << "Yes" << endl;
	cout << 1;
	int n = a;
	while(n > k)
	{
		cout << 0;
		n--;
	}
	cout << 1;
	while(n--)
		cout << 0;
	n = b-1;
	while(n--)
		cout << 1;
	cout << endl;

	cout << 1;
	n = a;
	while(n--)
		cout << 0;
	n = b; 
	while(n--)
		cout << 1;
	cout << endl;
	return 0;
}