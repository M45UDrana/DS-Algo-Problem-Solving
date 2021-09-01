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
		int n; cin >> n;
		int cnt1 = 0, cnt2 = 0;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			if(x == 1)
				cnt1++;
			else cnt2++;
		}
		cnt2 %= 2;
		if(cnt2)
			cnt1 -= 2;
		if(cnt1 >= 0 and cnt1%2 == 0)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}