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
		string s; cin >> s;
		int p;
		for(int i = 0; i < n; i++)
		{
			int a = s[i]-'0';
			if(i)
			{
				if(a+1 == p)
				{
					cout << 0;
					p = a+0;
				}
				else
				{
					cout << 1;
					p = a+1;
				}
			}
			else
			{
				cout << 1;
				p = a+1;
			}
		}
		cout << endl;
	}
	return 0;
}