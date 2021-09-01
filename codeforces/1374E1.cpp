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
	int n, k; cin >> n >> k;
	vector<int> both, lft, rht;
	for(int i = 0; i < n; i++)
	{
		int t, a, b; cin >> t >> a >> b;
		if(a and b)
			both.push_back(t);
		else if(a)
			lft.push_back(t);
		else if(b)
			rht.push_back(t);
	}
	sort(lft.begin(), lft.end());
	sort(rht.begin(), rht.end());
	int m = min(lft.size(), rht.size());
	for(int i = 0; i < m; i++)
		both.push_back(lft[i]+rht[i]);

	sort(both.begin(),both.end());
	int sum = 0;
	if(both.size() < k)
		return !(cout << -1 << endl);
	for(int i = 0; i < k; i++)
	   sum += both[i];
	cout << sum << endl;
	return 0;
}