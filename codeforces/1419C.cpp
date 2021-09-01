#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, x; cin >> n >> x;
		bool ok = true, ok1 = false;

		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			int y; cin >> y;
			ok &= (x == y);
			ok1 |= (x == y);
			sum += x-y;
		}
		if(ok)
			cout << 0 << endl;
		else if(sum == 0 or ok1)
			cout << 1 << endl;
		else cout << 2 << endl;
	}
    return 0;
}