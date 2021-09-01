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
		string s; cin >> s;
		int b1 = 0, b2 = 0;
		int ans = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '(')
				b1++;
			if(s[i] == '[')
				b2++;
			if(s[i] == ')' and b1 > 0)
			{
				b1--;
				ans++;
			}
			if(s[i] == ']' and b2 > 0)
			{
				b2--;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}