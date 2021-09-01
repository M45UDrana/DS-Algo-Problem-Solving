#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	int a[n];
	map<int,int> mp_od, mp_ev;
	vector<int > dup;

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i]%2)
		{
			if(mp_od.size() < n/2)
			{
				if(mp_od[a[i]])
					dup.push_back(i);
				else mp_od[a[i]] = 1;
			}
			else dup.push_back(i);
		}
		else
		{
			if(mp_ev.size() < n/2)
			{
				if(mp_ev[a[i]])
					dup.push_back(i);
				else mp_ev[a[i]] = 1;
			}
			else dup.push_back(i);
		}
	}

	int od_m = 1, ev_m = 2;

	int ans = 0;
	while(mp_od.size() < n/2)
	{
		ans++;
		while(mp_od[od_m])
			od_m += 2;
		if(od_m > m)
			return !(cout << -1 << endl);
		mp_od[od_m] = 1;
		a[dup.back()] = od_m;
		dup.pop_back();
	}

	while(mp_ev.size() < n/2)
	{
		ans++;
		while(mp_ev[ev_m])
			ev_m += 2;
		if(ev_m > m)
			return !(cout << -1 << endl);
		mp_ev[ev_m] = 1;
		a[dup.back()] = ev_m;
		dup.pop_back();
	}
	cout << ans << endl;
	for(int i = 0; i < n; i++)
		cout << a[i] << " \n"[i+1==n];
    return 0;
}