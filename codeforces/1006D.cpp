#include <bits/stdc++.h>

using namespace std;

int isequal(char a, char b, char c, char d)
{
	if((c == a and d == b) or (c == b and d == a))
		return 0;

	if(a == b and c == d)
		return 0;

	if(c == d)
		return 1;

	if(b == c or b == d or a == c or a == d)
		return 1;

	return 2;
}

int main()
{
	int n; cin >> n;
	string s, g; cin >> s >> g;
	int i = 0, j = n-1, ans = 0;
	while(i <= j)
	{
		if(i == j)
		{
			if(s[i] != g[i])
				ans++;
			break;
		}
		ans += isequal(s[i], s[j], g[i], g[j]);
		i++; j--;
	}
	cout << ans << endl;
    return 0;
}