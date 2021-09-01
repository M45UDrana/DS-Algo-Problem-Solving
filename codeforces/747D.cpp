#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	int cntn = 0, cntp = 0;
	vector<int> pos, neg;
	bool flg = false;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if(x < 0)
			flg = true;
		if(flg)
		{
			if(x < 0)
			{
				cntn++;
				if(cntp)
				{
					pos.push_back(cntp);
					cntp = 0;
				}
			}
			else
			{
				cntp++;
				if(cntn)
				{
					neg.push_back(cntn);
					cntn = 0;
				}
			}
		}
	}
	if(cntn)
		neg.push_back(cntn);

	for(int i = 0; i < neg.size(); i++)
		k -= neg[i];
	if(k < 0)
		return !(cout << -1 << endl);

	int ans = neg.size() + pos.size() + bool(cntp);
	sort(pos.rbegin(), pos.rend());
	while(pos.size())
	{
		if(pos.back() <= k)
		{
			ans -= 2;
			k -= pos.back();
			pos.pop_back();
		}
		else break;
	}

	if(cntp <= k and cntp)
		ans--;
	cout << ans << endl;
    return 0;
}