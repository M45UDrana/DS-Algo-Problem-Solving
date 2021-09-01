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

const int N = 1e5+7;

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll a[3];
		for(int i = 0; i < 3; i++)
			cin >> a[i];
		sort(a, a+3);
		if(a[2] > a[0]+a[1]+1)
			cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}