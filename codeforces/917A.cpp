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
	string s; cin >> s;
	int n = s.size();
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		int lft = 0, rht = 0, qm = 0;
		for(int j = i; j < n; j++)
		{
			if(s[j] == '(')
				lft++;
			else if(s[j] == ')')
				rht++;
			else
			{
				if(lft == rht)
					lft++;
				else
				{
					rht++;
					qm++;
				}
			}
			while(lft < rht and qm)
			{
				lft++;
				rht--;
				qm--;
			}
			if(lft < rht)
				break;
			if(!((j-i+1)%2) and lft == rht)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}