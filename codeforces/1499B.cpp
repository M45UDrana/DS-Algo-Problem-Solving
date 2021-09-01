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
		bool ok1 = false, ok2 = false;
		for(int i = 1; i < s.size(); i++)
		{
			if(s[i] == '1' and s[i-1] == '1')
			{
				ok1 = true;
			}

			if(ok1)
			{
				if(s[i] == '0' and s[i-1] == '0')
				{
					ok2 = true;
				}
			}
		}
		if(ok2)
			cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}