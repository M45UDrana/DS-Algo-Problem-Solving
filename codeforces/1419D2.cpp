#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int n, a[N];

bool isPos(int m)
{
	bool ok = true;
	int j = n-1;
	for(int i = m; i > 0 and j > 0; i--, j--)
	{
		if(a[i] >= a[j] or a[i] >= a[j+1])
			ok = false;
	}
	if(j < m)
		ok = false;
	return ok;
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];

	sort(a+1, a+n+1);

	int lft = 0, rht = n;

	while(lft < rht)
	{
		int mid = lft + (rht-lft+1)/2;

		if(isPos(mid))
			lft = mid;
		else rht = mid-1;
	}
	cout << lft << endl;
	int i = n, j = lft;
	while(i > lft)
	{
		cout << a[i] << " ";
		i--;
		if(j > 0)
		{
			cout << a[j] << " ";
			j--;
		}
	}
	cout << endl;
    return 0;
}