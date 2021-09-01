#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, g; cin >> s >> g;
	int i = s.size() - 1;
	int j = g.size() - 1;
	int ans = 0;
	while(s[i] == g[j] and i >= 0 and j >= 0)
	{
		ans += 2;
		i--;
		j--;
	}
	cout << (s.size() + g.size()) - ans << endl;
	return 0;
}