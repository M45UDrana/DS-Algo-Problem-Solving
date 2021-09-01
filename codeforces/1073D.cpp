#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n; cin >> n;
	ll T, mn; cin >> T;

	vector<ll> v(n);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
		if(i)
			mn = min(mn, v[i]);
		else mn = v[i];
	}

	ll ans = 0;

	while(T >= mn)
	{
		ll sum = 0, cnt = 0;
		for(int i = 0; i < n; i++)
		{
			if(v[i]+sum <= T)
			{
				sum += v[i];
				cnt++;
			}
		}

		ans += cnt * ll(T/sum);
		T %= sum;
	}
	cout << ans << endl;

    return 0;
}

/* 
 * How modulo work toword complexity.
*/