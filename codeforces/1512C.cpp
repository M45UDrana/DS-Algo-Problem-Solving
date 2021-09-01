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
		int a, b; cin >> a >> b;
		string s; cin >> s;
		s = " " + s;
		int n = s.size()-1;
		bool ok = true;
		if(a%2)
		{
			int i = (n+1)/2;
			if(n%2 and (s[i] == '?' or s[i] == '0'))
				s[i] = '0';
			else ok = false;
			a--;
		}
		if(b%2)
		{
			int i = (n+1)/2;
			if(n%2 and (s[i] == '?' or s[i] == '1'))
				s[i] = '1';
			else ok = false;
			b--;
		}

		int lft = 1, rht = n;
		while(lft < rht)
		{
			if(s[lft] != '?' and s[rht] == '?')
			{
				s[rht] = s[lft];
				if(s[lft] == '0')
					a -= 2;
				else b -= 2;
			}
			else if(s[lft] == '?' and s[rht] != '?')
			{
				s[lft] = s[rht];
				if(s[lft] == '0')
					a -= 2;
				else b -= 2;
			}
			else if(s[lft] != '?' and s[rht] != '?')
			{
				if(s[lft] == '0')
					a -= 2;
				else b -= 2;
			}
			lft++; rht--;
		}
		lft = 1; rht = n;
		while(lft < rht)
		{
			if(s[lft] != s[rht])
				ok = false;
			if(s[lft] == '?')
			{
				if(a > b)
				{
					s[lft] = '0';
					s[rht] = '0';
					a -= 2;
				}
				else
				{
					s[lft] = '1';
					s[rht] = '1';
					b -= 2;
				}
			}
			lft++; rht--;
		}
		if(a or b)
			ok = false;
		if(ok)
		{
			for(int i = 1; i <= n; i++)
				cout << s[i];
			cout << endl;
		}
		else cout << -1 << endl;
	}
	return 0;
}