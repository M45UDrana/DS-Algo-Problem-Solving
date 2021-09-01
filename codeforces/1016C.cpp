#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'


int main()
{
	ll n; cin >> n;
	ll a[2][n], b[2][n];
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];

	ll sum[n], m = n*2-1;
	for(ll i = n-1; i > 0; i--)
	{
		b[0][i] = a[0][i]*(i*2)+a[1][i]*m;
		b[1][i] = a[1][i]*(i*2)+a[0][i]*m;
		sum[i] = a[0][i]+a[1][i];
		if(i < n-1)
		{
			sum[i] += sum[i+1];
			b[0][i] += b[0][i+1]-sum[i+1];
			b[1][i] += b[1][i+1]-sum[i+1];
		}
	}


	ll ans = a[1][0], in = 0, ksum = 0;
	for(ll i = 0, j = 0; i < n-1; i++,j++)
	{
		ksum += a[in][i]*j;
		ans = max(ans, ksum+b[in][i+1]-sum[i+1]+
				 a[in^1][i]*m);
		in ^= 1; j++;
		ksum += a[in][i]*j;
		ans = max(ans, ksum+b[in][i+1]);
	}
	cout << ans << endl;

    return 0;
}