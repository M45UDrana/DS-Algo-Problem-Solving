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
		string s; cin >> s;
		int lft = 30, rht = 30, n = s.size();
		for(int i = 0; i < n; i++)
		{
			if(s[i] == 'a')
			{
				lft = i-1;
				rht = i+1;
			}
		}
		if(lft > n)
		{
			cout << "NO" << endl;
			continue;
		}
		for(int i = 1; i < n; i++)
		{
			if(lft >= 0 and s[lft] == char(i+'a'))
				lft--;
			else if(rht < n and s[rht] == char(i+'a'))
				rht++;
		}
		if(lft == -1 and rht == n)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}