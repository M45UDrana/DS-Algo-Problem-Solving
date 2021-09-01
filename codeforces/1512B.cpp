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
		string s[n];
		for(int i = 0; i < n; i++)
			cin >> s[i];
		pair<int,int> a = {-1,-1}, b{-1,-1};
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(s[i][j] == '*')
				{
					if(a.ff == -1)
						a = {i, j};
					else b = {i, j};
				}
			}
		}
		if(a.ff == b.ff)
		{
			int i;
			if(a.ff+1 < n)
				i = a.ff+1;
			else i = a.ff-1;
			s[i][a.ss] = '*';
			s[i][b.ss] = '*';
		}
		else if(a.ss == b.ss)
		{
			int j;
			if(a.ss+1 < n)
				j = a.ss+1;
			else j = a.ss-1;
			s[a.ff][j] = '*';
			s[b.ff][j] = '*';
		}
		else
		{
			s[a.ff][b.ss] = '*';
			s[b.ff][a.ss] = '*';
		}
		for(int i = 0; i < n; i++)
			cout << s[i] << endl;
	}
	return 0;
}