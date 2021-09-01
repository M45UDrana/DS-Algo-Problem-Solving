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
    while(Case--)
    {
		int n, m; cin >> n >> m;
		string s, t; cin >> s >> t;
		set<int> S[26];
		for(int i = 0; i < n; i++)
			S[s[i]-'a'].insert(i);

		int bfl[m];
		set<int>::iterator x, y;
		for(int i = 0, cur = -1; i < m; i++)
		{
			int j = t[i]-'a';
			x = S[j].lower_bound(cur);
			bfl[i] = *x;
			cur = bfl[i]+1;
		}

		int ans = 0;
		for(int i = m-1, cur = n+5; i > 0; i--)
		{
			int j = t[i]-'a';
			x = S[j].end(); x--;
			while((*x) > cur)
			{
				S[j].erase(x); 
				x = S[j].end(); x--;
			}
			ans = max((*x)-bfl[i-1], ans);
			cur = (*x)-1;
		}
		cout << ans << endl;
	}
	return 0;
}