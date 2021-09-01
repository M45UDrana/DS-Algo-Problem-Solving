#include <bits/stdc++.h>

using namespace std;

int main()
{
	long double n, ans = 0; cin >> n;
	int m; cin >> m;

	long double neg = int((n+1)/2);
	if(int(n)%2)
		neg = neg*(neg-1);
	else neg = neg*(neg-1) + neg;

	for(int i = 0; i < m; i++)
	{
		long double x, d; cin >> x >> d;
		if(d < 0)
			ans += (neg*d) + (x*n);
		else
			ans += ((((n-1)*(n-1)+(n-1))/2) * d) + (n*x);
	}
	cout << setprecision(20) << ans/n << endl;
    return 0;
}