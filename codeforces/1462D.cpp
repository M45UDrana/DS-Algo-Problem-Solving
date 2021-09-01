#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);
 
int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		int n; cin >> n;
		int a[n], sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}

		for(int i = n; i > 0; i--)
		{
			int cnt = 0, val = sum / i;

			if(val*i != sum)
				continue;

			bool ok = true;
			for(int j = 0; j < n; j++)
			{
				int x = a[j];
				while(x < val and j < n)
				{
					x += a[++j];
					cnt++;
				}

				if(x != val or cnt > n-i)
				{
					ok = false;
					break;
				}
			}

			if(ok)
			{
				cout << n-i << endl;
				break;
			}
		}
	}
	return 0;
}