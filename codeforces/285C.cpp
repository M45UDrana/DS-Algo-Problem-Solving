#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
	IO
	int n;
	cin >> n;
	int a[n];
	long long ans = 0;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	for(int i = 1; i <= n; i++)
	{
		ans += abs(i - a[i-1]);
	}
	cout << ans << endl;

        return 0;
}