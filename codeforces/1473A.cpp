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
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		int n, k; cin >> n >> k;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(),v.end());
		if(v[0]+v[1] <= k)
			cout << "YES" << endl;
		else if(v[n-1] <= k)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}