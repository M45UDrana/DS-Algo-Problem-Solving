#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		while(a[i] % 2 == 0 || a[i] % 3 == 0)
		{
			if(a[i] % 2 == 0)
			{
				a[i] /= 2;
			}
			else if(a[i] % 3 == 0)
			{
				a[i] /= 3;
			}
		}
	}
	sort(a, a+n);
	if(a[0] == a[n-1])
		 cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}