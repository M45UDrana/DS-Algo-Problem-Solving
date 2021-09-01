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
    int t = 1;
    while(t--)
    {
		ll n; cin >> n;
		map<pair<char,pair<int,int>>, int> M;
		map<pair<char,pair<int,int>>, int> :: iterator it;

		M[mp('u', mp(0,1))] = 1;
		M[mp('d', mp(0,-1))] = 1;
		M[mp('l', mp(-1,0))] = 1;
		M[mp('r', mp(1,0))] = 1;

		vector<pair<char,pair<int,int>>> v;
		for(int ii = 2; ii <= n; ii++)
		{
			for(it = M.begin(); it != M.end(); it++)
			{
				v.pb(mp(it->ff.ff, mp(it->ff.ss.ff, it->ff.ss.ss)));
			}
			M.clear();

			for(int i = 0; i < v.size(); i++)
			{
				char c = v[i].ff;
				if(c == 'u' or c == 'd')
				{
					M[mp('l', mp(v[i].ss.ff-1, v[i].ss.ss))] = 1;
					M[mp('r', mp(v[i].ss.ff+1, v[i].ss.ss))] = 1;
				}
				else
				{
					M[mp('u', mp(v[i].ss.ff, v[i].ss.ss+1))] = 1;
					M[mp('d', mp(v[i].ss.ff, v[i].ss.ss-1))] = 1;
				}
			}
			v.clear();
		}

		set<pair<int,int>> st;
		for(it = M.begin(); it != M.end(); it++)
		{
			st.insert(mp(it->ff.ss.ff,it->ff.ss.ss));
		}
		cout << st.size() << endl;
		M.clear();
		st.clear();
	}
	return 0;
}