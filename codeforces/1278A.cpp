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
 
int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		string p; cin >> p;
		string h; cin >> h;
		int n = h.size(), m = p.size();
		sort(p.begin(), p.end());
		bool ok = false;
		for(int i = 0; i+m-1 < n; i++)
		{
			string p_ = "";

			for(int j = i; j-i < m; j++)
				p_ += h[j];
			sort(p_.begin(), p_.end());
			if(p_ == p)
			{
				ok = true;
				break;
			}
		}
		if(ok)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}