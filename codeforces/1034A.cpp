#include <bits/stdc++.h>

using namespace std;

const int N = 15000005;
int pf[N], cnt[N];

void seive()
{
	for(int i = 1; i < N; i ++)
	{
		if(i%2)
			pf[i] = i;
		else pf[i] = 2;
	}
	for(int i = 3; i*i < N; i += 2)
	{
		if(pf[i] == i)
		{
			for(int j = i*i; j < N; j += 2*i)
				pf[j] = i;
		}
	}
}

int main()
{
	int n; cin >> n;
	int a[n], g;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(i)
			g = __gcd(g, a[i]);
		else g = a[i];
	}

	seive();

	for(int i = 0; i < n; i++)
	{
		a[i] /= g;
		while(a[i] > 1)
		{
			int x = pf[a[i]];
			while(a[i]%x == 0)
				a[i] /= x;
			cnt[x]++;
		}
	}

	int ans = 0;
	for(int i = 1; i < N; i++)
		ans = max(ans, cnt[i]);
	if(!ans)
		cout << -1 << endl;
	else cout << n-ans << endl;

    return 0;
}