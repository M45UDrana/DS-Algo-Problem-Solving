#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int ans, mnd;
		for(int i = 0; i+k < n; i++)
		{
			int m = (a[i]+a[i+k])/2;
			int d = max(abs(a[i]-m), abs(a[i+k]-m));
			if(i)
			{
				if(mnd > d)
				{
					mnd = d;
					ans = m;
				}
			}
			else 
			{
				mnd = d;
				ans = m;
			}
		}
		cout << ans << endl;

	}
    return 0;
}