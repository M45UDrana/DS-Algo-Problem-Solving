#include <bits/stdc++.h>

using namespace std;

const int N = 15e5;

int main()
{
	int n; cin >> n;
	int val[n+1], xr[n+1];
	xr[0] = 0;
	vector<int> cntev(N, 0), cntod(N, 0);

	for(int i = 1; i <= n; i++)
	{
		cin >> val[i];
		xr[i] = val[i]^xr[i-1];
		if(i%2)
			cntod[xr[i]]++;
		else cntev[xr[i]]++;
	}


	long long ans = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i%2)
		{
			cntod[xr[i]]--;
			ans += cntev[xr[i-1]];
		}
		else
		{
			cntev[xr[i]]--;
			ans += cntod[xr[i-1]];
		}
	}
	cout << ans << endl;
    return 0;
}