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
		vector<int> a, b;
		int sq = ceil(sqrt(n));
		int m = n;
		for(int i = n-1; i >= 2; i--)
		{
			if(sq == i)
			{
				a.push_back(m);
				b.push_back(i);
				a.push_back(m);
				b.push_back(i);
				m = sq;
				sq = ceil(sqrt(sq));
			}
			else
			{
				a.push_back(i);
				b.push_back(m);
			}
		}
		cout << a.size() << endl;
		for(int i = 0;i  < a.size(); i++)
			cout << a[i] << " " << b[i] << endl;
	}
	return 0;
}