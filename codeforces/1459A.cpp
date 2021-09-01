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
		int n; cin >> n; 
		string s, t; cin >> s >> t;
		int cnts = 0, cntt = 0;
		for(int i = 0; i < n; i++)
		{
			if(s[i] > t[i])
				cnts++;
			else if(t[i] > s[i])
				cntt++;
		}
		if(cnts > cntt)
			cout << "RED" << endl;
		else if(cntt > cnts)
			cout << "BLUE" << endl;
		else cout << "EQUAL" << endl;
	}
	return 0;
}