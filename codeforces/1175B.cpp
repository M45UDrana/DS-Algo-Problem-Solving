#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll of = 4294967295;
ll cnt[101];

int main()
{
	int n; cin >> n;
	ll ans = 0, ad = 1;
	vector<ll>lop;
	bool ok = true;
	for(int i = 0; i < n; i++)
	{
		string s; cin >> s;
		if(s == "for")
		{
			ll x; cin >> x;
			lop.push_back(x);
			cnt[x]++;
		}
		else if(s == "end")
		{
			ll x = lop.back();
			cnt[x]--;
			lop.pop_back();
		}
		else
		{
			for(int i = 2; i <= 100; i++)
			{
				for(int j = 0; j < cnt[i]; j++)
				{
					ad *= i;
					if(ad > of)
					{
						ok = false;
						break;
					}
				}
				if(!ok)
					break;
			}
			if(ok)
				ans += ad;
			ad = 1;
		}

		if(ans > of)
			ok = false;
	}
	if(ok)
		cout << ans << endl;
	else cout << "OVERFLOW!!!" << endl;
    return 0;
}