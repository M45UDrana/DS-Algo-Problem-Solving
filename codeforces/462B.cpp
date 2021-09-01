#include <bits/stdc++.h>

using namespace std;

int a[125] = {0};
int main()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;
	for(int i = 0; i < n; i++)
		a[s[i]]++;
	sort(a, a+125);
	vector<long long>v;
	for(int i = 124; i >= 0; i--)
	{
		v.push_back(min(k, a[i]));
		k -= min(k, a[i]);
		if(k == 0) break;
	}
	long long ans = 0;
	for(int i = 0; i < v.size(); i++)
		ans += v[i]*v[i];
	cout << ans << endl;

	return 0;
}