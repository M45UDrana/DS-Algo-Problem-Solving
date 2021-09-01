#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

int main()
{
	int a[6];
	cin >> a[0] >> a[1];
	a[2] = a[1] - a[0]; a[3] = a[2] - a[1]; 
	a[4] = a[3] - a[2]; a[5] = a[4] - a[3];
	long long n; cin >> n; n--;
	n = a[n%6] % mod;
	if(n < 0)
		cout << n + mod << endl;
	else    cout << n % mod << endl;

	return 0;
}