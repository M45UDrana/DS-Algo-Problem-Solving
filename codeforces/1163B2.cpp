#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int cnt[N], num[N];

int main()
{
	int n; cin >> n;
	int mx = 1, ans = 1;
	for(int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		num[cnt[x]]--;
		cnt[x]++;
		num[cnt[x]]++;

		mx = max(cnt[x], mx);
		if(mx == 1)
			ans = i;
		else if(mx == i)
			ans = i;
		else if(num[1] == 1 and num[mx]*mx == i-1)
			ans = i;
		else if(num[mx] == 1 and mx+(mx-1)*num[mx-1]
				== i)
			ans = i;
	}
	cout << ans << endl;
    return 0;
}