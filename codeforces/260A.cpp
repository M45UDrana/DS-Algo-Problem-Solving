#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int a, b, n, i; cin >> a >> b >> n;
	a *= 10;
	bool flg = false;
	for(i = 0; i < 10; i++)
	{
		if((a+i) % b == 0)
		{
			flg = true;
			break;
		}
	}
	a += i;
	if(flg)
	{
		cout << a;
		for(i = 1; i < n; i++)
			cout << 0 ;
		cout << endl;
	}
	else cout << -1 << endl;
		
	
	return 0;
}