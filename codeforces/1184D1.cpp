#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, m, t; cin >> n >> k >> m >> t;

	while(t--)
	{
		int x, p; cin >> x >> p;
		if(x)
		{
			n++;
			if(p <= k)
				k++;
			cout << n << " " << k << endl;
		}
		else
		{
			if(p < k)
			{
				k -= p;
				n -= p;
			}
			else
			{
				n = p;
			}
			cout << n << " " << k << endl;
		}
	}
    return 0;
}