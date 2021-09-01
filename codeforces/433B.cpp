#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
	IO
	int n;
	cin >> n;
	long long a[n], sum[n], ssum[n];
	cin >> a[0]; sum[0] = a[0];
	for(int i = 1; i < n; i++)
	{
		cin >> a[i];
		sum[i] = sum[i-1] + a[i];
	}
	sort(a, a+n);
	ssum[0] = a[0];
	for(int i = 1; i < n; i++)
		ssum[i] = ssum[i-1]+a[i];

	int m;
	cin >> m;
	while(m--)
	{
		int flg, l, r;
		cin >> flg >> l >> r;
		if(flg == 1)
		{
			if(l == 1)
				cout << sum[r-1] << endl;
			else    cout << sum[r-1] - sum[l-2] << endl;
		}
		else
		{
			if(l == 1)
                                cout << ssum[r-1] << endl;
                        else    cout << ssum[r-1] - ssum[l-2] << endl;
		}
	}
        return 0;
}