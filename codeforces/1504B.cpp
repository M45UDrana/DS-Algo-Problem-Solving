#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);


int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n; cin >> n;
		vector<int> a(n), b(n), prt(n);
		for(int i = 0, cnt = 0; i < n; i++)
		{
			char c; cin >> c;
			a[i] = c-'0';
			if(c-'0' == 0)
				cnt++;
			else cnt--;
			prt[i] = cnt;
		}
		for(int i = 0; i < n; i++)
		{
			char c; cin >> c;
			b[i] = c-'0';
		}
		bool ok = true;
		for(int i = n-1, cnt = 0; i >= 0; i--)
		{
			(a[i] += cnt) %= 2;
			if(a[i] != b[i])
			{
				if(prt[i] == 0)
					cnt++;
				else ok = false;
			}
		}
		if(ok)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}