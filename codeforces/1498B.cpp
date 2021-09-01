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
		ll n, w; cin >> n >> w;
		vector<ll>v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end(), greater<ll>());
		priority_queue<ll> q;
		q.push(w);
		for(int i = 0; i < n; i++)
		{
			ll x = q.top();
			q.pop();
			if(x < v[i])
			{
				q.push(x);
				q.push(w-v[i]);
			}
			else q.push(x-v[i]);
		}
		cout << q.size() << endl;
	}
	return 0;
}