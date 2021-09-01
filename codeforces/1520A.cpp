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
		int n; cin >> n;
		string s, g; cin >> s;
		g = s[0];
		for(int i = 1; i < n; i++)
		{
			if(s[i] != s[i-1])
				g += s[i];
		}
		int used[26];
		memset(used, 0, sizeof(used));
		bool ok = true;
		for(int i = 0; i < g.size(); i++)
		{
			if(used[int(g[i]-'A')])
				ok = false;
			used[int(g[i]-'A')] = 1;
		}
		if(ok)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}