#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll inf = 1e9+7;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		string s; cin >> s;
		ll m = s.size();
		for(int i = 0; s.size() < n; i++)
		{
			int x = s[i]-'0', md = s.size();
			while(x > 1 and s.size() < n)
			{
				for(int j = i+1; j < md and s.size() 
											< n; j++)
					s += s[j];
				x--;
			}
		}
		for(int i = 0; i < n; i++)
			m = ((m-1) * ll(s[i]-'0') ) % inf;
		cout << (m+n)%inf << endl;
	}
    return 0;
}