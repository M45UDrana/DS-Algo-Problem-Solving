#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int cnt[k];
	memset(cnt, 0, sizeof(cnt));
	for(int i = 0; i < n; i++)
	{
		cnt[s[i]-'A']++;
	}
	int ans = cnt[0];
	for(int i = 0; i < k; i++)
		ans = min(cnt[i], ans);
	cout << ans*k << endl;
    return 0;
}