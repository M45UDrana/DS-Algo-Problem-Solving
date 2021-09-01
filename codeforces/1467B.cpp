#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+7;

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		int n; cin >> n;
		int a[n], b[n];
		memset(b, 0, sizeof(b));
		for(int i = 0; i < n; i++)
			cin >> a[i];

		for(int i = 1; i < n-1; i++)
		{
			if(a[i-1] < a[i] and a[i] > a[i+1])
				b[i] = 1;
			if(a[i-1] > a[i] and a[i] < a[i+1])
				b[i] = 1;
		}
		int ans = 0;
		for(int i = 0; i < n; i++)
			ans += b[i];
		int dif = 0;

		for(int i = 2; i < n-2; i++)
		{
			int tmp = a[i];
			a[i] = a[i-1];
			int cnt = 0, cnt1 = 0;
			for(int j = i-1; j <= i+1; j++)
			{
				if(a[j-1] < a[j] and a[j] > a[j+1])
					cnt++;
				else if(a[j-1] > a[j] and a[j] < a[j+1])
					cnt++;

				cnt1 += b[j];
			}

			dif = max(dif, cnt1-cnt);

			a[i] = a[i+1];
			cnt = 0;
			for(int j = i-1; j <= i+1; j++)
			{
				if(a[j-1] < a[j] and a[j] > a[j+1])
					cnt++;
				else if(a[j-1] > a[j] and a[j] < a[j+1])
					cnt++;

			}

			dif = max(dif, cnt1-cnt);

			a[i] = tmp;
		}
		ans -= dif;
		if(n <= 4)
			ans = 0;
		cout << ans << endl;
	}
	return 0;
}