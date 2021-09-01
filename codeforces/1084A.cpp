#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+7;

int main()
{
	int n; cin >> n;
	int a[n+1];
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	int res = oo;
	for(int i = 1; i <= n; i++)
	{
		int cnt = 0;
		for(int j = 1; j <= n; j++)
		{
			cnt += ((abs(i-j)+abs(j-1)+abs(i-1))*2)*a[j]; 
		}
		res = min(res, cnt);
	}
	
	cout << res << endl;
	return 0;
}