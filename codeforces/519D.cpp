#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int a[130];
	for(char c = 'a'; c <= 'z'; c++)
	{
		int x; cin >> x;
		a[c] = x;
	}

	map<pair<char,ll>, ll > v;

	string s; cin >> s;
	ll cur = 0, n = s.size();
	ll ans = 0;
	for(int i = 0; i < n-1; i++)
	{
		cur += a[s[i]];
		v[make_pair(s[i], cur)]++;
		ans += v[make_pair(s[i+1], cur)];
	}
	cout << ans << endl;
    return 0;
}