#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a, b; cin >> n >> b >> a;
	int A = a;
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if(x and a < A and b)
		{
			ans++;
			b--;
			a++;
		}
		else if(a)
		{
			ans++;
			a--;
		}
		else if(b)
		{
			ans++;
			b--;
		}
	}
	cout << ans << endl;
    return 0;
}