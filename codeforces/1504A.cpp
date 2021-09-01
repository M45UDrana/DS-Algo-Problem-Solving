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
		int n = s.size();
		bool ok = true;
		for(int i = 0; i < n; i++)
		{
			if(s[i] != 'a')
			{
				cout << "YES" << endl;
				int l = i, r = n-1-i;
				if(l > r)
				{
					int j = 0;
					for(; j < r; j++)
						cout << s[j];
					cout << 'a';
					for(; j < n; j++)
						cout << s[j];
					cout << endl;
				}
				else
				{
					int j = 0;
					for(; j < n-l;j++)
						cout << s[j];
					cout << 'a';
					for(;j < n; j++)
						cout << s[j];
					cout << endl;
				}
				ok = false;
				break;
			}
		}
		if(ok)
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}