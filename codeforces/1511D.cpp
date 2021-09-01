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
	int n, k; cin >> n >> k;
	int chr[k][k];
	memset(chr, 0, sizeof(chr));
	string s = "a";
	int p = 0;
	while(s.size() < n)
	{
		int cur = 0, mn = chr[p][0];
		for(int i = 0; i < k; i++)
		{
			if(chr[p][i] < mn)
			{
				mn = chr[p][i];
				cur = i;
			}
		}
		chr[p][cur]++;
		s += char(cur+'a');
	}
	cout << s << endl;
	return 0;
}