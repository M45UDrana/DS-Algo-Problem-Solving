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
		if(s.size()%2)
		{
			cout << "NO" << endl;
			continue;
		}
		int n = s.size();
		if(s[0] != ')' and s[n-1] != '(')
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}