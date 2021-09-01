#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[n], ocur[11];
	memset(ocur, 0, sizeof(ocur));

	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		ocur[a[i]]++;
		vector<int>cnt;
		for(int j = 1; j <= 10; j++)
			if(ocur[j])
				cnt.push_back(ocur[j]);
		int m = cnt.size();
		sort(cnt.begin(), cnt.end());

		if(m == 1)
			ans = i+1;
		else if(cnt[0] == 1 and cnt[1] == cnt[m-1])
			ans = i+1;
		else if(cnt[0] == cnt[m-2] and cnt[m-2]+1 == 
				cnt[m-1])
			ans = i+1;
	}
	cout << ans << endl;
    return 0;
}