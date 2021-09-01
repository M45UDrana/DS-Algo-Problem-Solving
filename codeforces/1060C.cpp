#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	for(int j = 0; j < m; j++)
		cin >> b[j];
	int x; cin >> x;

	vector<int>sub_a(sum+1, 0);
	for(int i = 0; i < n; i++)
	{
		int tmp_sum = 0;
		for(int j = i; j < n; j++)
		{
			tmp_sum += a[j];
			sub_a[tmp_sum] = max(sub_a[tmp_sum], j-i+1);
		}
	}

	for(int i = 1; i <= sum; i++)
		sub_a[i] = max(sub_a[i], sub_a[i-1]);

	int ans = 0;
	for(int i = 0; i < m; i++)
	{
		int sum_b = 0;
		for(int j = i; j < m; j++)
		{
			sum_b += b[j];
			int sum_a = x/sum_b;
			int tans = (sum_a >= sum)? n:sub_a[sum_a];
			ans = max(ans, tans*(j-i+1));
		}
	}
	cout << ans << endl;
	return 0;
}