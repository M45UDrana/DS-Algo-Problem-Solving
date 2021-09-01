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

const int N = 1e5+7;

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll n, s; cin >> n >> s;
		ll a, sum = 0, cnt = 0, mx = 0, idx = 0, pidx;
		for(int i = 0; i < n; i++)
		{
			cin >> a;
			sum += a;
			if(a > mx)
			{
				mx = a;
				pidx = i+1;
			}
			if(sum <= s)
				cnt = i+1;
			else if(sum-mx <= s and cnt < i)
			{
				cnt = i;
				idx = pidx;
			}
		}
		cout << idx << endl;
	}
	return 0;
}