#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		long long x, y;
		cin >> x >> y;
		x = x - y;
		if(x > 1) cout << "YES" << endl;
		else      cout << "NO" << endl;
	}
	return 0;
}