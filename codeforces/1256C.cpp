#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, d; cin >> n >> m >> d;
	int a[m], b[m];
	for(int i = 0; i < m; i++)
		cin >> a[i];
	int cur = 0;
	for(int i = 0; i < m; i++)
	{
		b[i] = cur+d;
		cur = b[i]+a[i]-1;
	}
	if(cur+d < n+1)
		return !(cout << "NO" << endl);

	int exc = cur-n;
	if(exc > 0)
	{
		int x = 0;
		for(int i = 0; i < m; i++)
		{
			if(x < exc)
				x = min(x+d-1, exc);
			b[i] -= x;
		}
	}

	int ans[n+1];
	memset(ans, 0, sizeof(ans));
	for(int i = 0; i < m; i++)
		for(int j = 0; j < a[i]; j++)
			ans[b[i]+j] = i+1;

	cout << "YES" << endl;
	for(int i = 1; i <= n; i++)
		cout << ans[i] << " \n"[i==n];
    return 0;
}