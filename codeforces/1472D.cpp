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
		ll n; cin >> n;
		vector<ll> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.rbegin(), a.rend());
		ll alice = 0, bob = 0;
		for(int i = 0; i < n; i++)
		{
			if(i%2 == 0)
			{
				if(a[i]%2 == 0)
					alice += a[i];
			}
			else
			{
				if(a[i]%2)
					bob += a[i];
			}
		}
		if(alice > bob)
			cout << "Alice" << endl;
		else if(bob > alice)
			cout << "Bob" << endl;
		else cout << "Tie" << endl;
	}
	return 0;
}