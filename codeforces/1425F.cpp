#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int sum[n+1], ans[n+1];

	for(int i = 2; i <= n; i++)
	{
		cout << "? " << 1 << " " << i << endl;
		fflush(stdout);
		cin >> sum[i];
	}

	for(int i = n; i >= 3; i--)
	{
		ans[i] = sum[i]-sum[i-1];
	}

	cout << "? " << 2 << " " << 3 << endl;
	fflush(stdout);
	int x; cin >> x;
	ans[1] = sum[3]-x;
	ans[2] = sum[2]-ans[1];

	cout << '!';
	for(int i = 1; i <= n; i++)
		cout << " " << ans[i];
	cout << endl;
    return 0;
}