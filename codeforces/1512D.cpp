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
		map<ll,ll> MP;
		int n; cin >> n;
		n += 2;
		ll a[n];
		ll sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
			MP[a[i]]++;
		}
		bool ok = false;
		for(int i = 0; i < n; i++)
		{
			if((sum-a[i])%2)
				continue;
			ll x = (sum-a[i])/2;
			MP[a[i]]--;
			if(MP[x])
			{
				bool flg = true, flg1 = true;
				for(int j = 0; j < n; j++)
				{
					if(i == j and flg)
						flg = false;
					else if(a[j] == x and flg1)
						flg1 = false;
					else cout << a[j] << " ";
				}
				cout << endl;
				ok = true;
				break;
			}
			MP[a[i]]++;
		}
		if(!ok)
			cout << -1 << endl;
		MP.clear();

	}
	return 0;
}