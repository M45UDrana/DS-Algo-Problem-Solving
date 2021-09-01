#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll inf = 1e9+7;

int main()
{
	ll n; cin >> n;
	bool pos = false, neg = false;
	ll sum = 0, mn;

	ll x;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		sum += abs(x);
		if(i)
			mn = min(mn, abs(x));
		else mn = abs(x);
		if(x >= 0)
			pos = true;
		if(x <= 0)
			neg = true;
	}

	if(n == 1)
		cout << x << endl;
	else if(pos and neg)
		cout << sum << endl;
	else cout << sum - 2*mn << endl;
    return 0;
}