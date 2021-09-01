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
		int x; cin >> x;
		vector<int> v;
		if(x <= 45)
		{
			for(int i = 9; i >= 1; i--)
			{
				if(x >= i)
				{
					v.push_back(i);
					x -= i;
				}
			}
			if(x)
				v.push_back(x);
			sort(v.begin(), v.end());
			for(int i = 0; i < v.size(); i++)
				cout << v[i];
			cout << endl;
		}
		else cout << -1 << endl;
	}
	return 0;
}