#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool lst[1001];
vector<ll> prim;

void seive()
{
	for(int i = 4; i <= 1000; i += 2)
		lst[i] = true;
	int n = sqrt(1000)+0.5;
	for(int i = 3; i <= n; i += 2)
	{
		if(!lst[i])
			for(int j = i*i; j <= 1000; j += 2*i)
				lst[j] = 1;
	}
	for(int i = 2; i <= 1000; i++)
		if(!lst[i])
			prim.push_back(i);
}

int main()
{
	seive();
	ll n; cin >> n;
	vector<ll>ans[200];
	for(int i = 0; i < prim.size(); i++)
	{
		ll x = prim[i];
		for(ll j = 1; j*x <= n; j++)
			ans[i].push_back(j*x);
	}
	int idx = 0;
	for(int i = 0; i < prim.size(); i++)
	{
		if(ans[i].size() >= ans[idx].size())
			idx = i;
	}
	for(int i = 0; i < n-ans[idx].size(); i++)
		cout << 1 << " ";
	for(int i = 0; i < ans[idx].size(); i++)
		cout << ans[idx][i] << " ";
	cout << endl;
	return 0;
}