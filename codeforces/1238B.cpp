#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
        int t, ans = 0;
        cin >> t;
	while(t--)
	{
		ans = 0;
		int n, r;
		cin >> n >> r;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		for(int i = 0; i < n-1; i++)
		{
			if(a[i] == a[i+1])
				a[i] = 0;
		}
 
		int rn = 0;
		for(int i=n-1; i >= 0; i--)
		{
			if(a[i]-rn > 0)
			{
				ans++;
				rn += r;
			}
		}
		cout << ans << endl;
	}
	
        return 0;
}