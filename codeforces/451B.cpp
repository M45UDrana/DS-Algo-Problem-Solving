#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n, l, r, i; cin >> n; l = r = n-1;
	priority_queue<int>pq;
	int a[n]; 
	for(i = 0; i < n; i++) 
		cin >> a[i];
	int maxi = 0, maxj = 0;
	for(i = 0; i < n-1; i++)
	{
		if(a[i] > a[i+1])
		{
			l = i;
			maxi = (maxi, a[i]);
			break;
		}
		maxj = max(a[i], maxj);
	}
	for(i++; i < n-1; i++)
	{
		maxi = max(maxi, a[i]);
		if(a[i] < a[i+1] && a[i+1] > maxi)
		{
			r = i;
			break;
		}
	}
	for(i++; i < n-1; i++)
	{
		if(a[i] > a[i+1])
		{
			cout << "no" << endl;
			return 0;
		}
	}
	for(i = l; i <= r; i++)
		pq.push(a[i]);

	for(i = l; i <= r; i++)
	{
		if(a[i] != pq.top())
		{
			cout << "no" << endl;
			return 0;
		}
		if(maxj > pq.top())
		{
			cout << "no" << endl;
			return 0;
		}
		pq.pop();
	}
	cout << "yes" << endl;
	cout << l+1 << " " << r+1 << endl;


	return 0;
}