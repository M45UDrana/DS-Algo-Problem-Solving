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
		string s = "1", g;
		cin >> g;
		s += g;
		if(g.size() == 1)
		{
			cout << 0 << endl;
			continue;
		}
		int ans = 0;
		for(int i = 2; i < s.size(); i++)
		{
			if(s[i] == s[i-1] or s[i] == s[i-2])
			{
				ans++;
				s[i] = '1';
			}
		}
		cout << ans << endl;
	}
	return 0;
}