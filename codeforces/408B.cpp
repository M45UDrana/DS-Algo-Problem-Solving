#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
 
int main() 
{
	int a[125] = {0};
	int b[125] = {0};
    string s, g; cin >> s;
    int n = s.size();
    for(int i=0; i<n; i++)
    	a[(int)s[i]]++;
    cin >> g; cin >> g;
    n = g.size();
    for(int i=0; i<n; i++)
    	b[(int)g[i]]++;
    int ans = 0;
    for(int i=97; i<123; i++)
    {
    	ans += min(a[i], b[i]);
    	if(b[i] && !a[i])
    	{
    		ans = 0;
    		break;
    	}
	}
    cout << ((ans)?(ans):(-1)) << endl;
    return 0;
}