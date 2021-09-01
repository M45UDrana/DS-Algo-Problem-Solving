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
const ll N = 2e9;
int main()
{
    ll n, a; cin >> n;
    pair<ll,ll>p = {-N, N};
    for(int i=0; i < n; i++)
    {
        string s, g;
        cin >> s >> a >> g;
        if(s.size() == 1)
        {
            if(g == "Y")
            {
                if(s[0] == '>')
                    p.ff = max(p.ff, a+1);
                else p.ss = min(p.ss, a-1);
            }
            else 
            {
                if(s[0] == '>')
                    p.ss = min(p.ss, a);
                else p.ff = max(p.ff, a);
            }
        }
        else 
        {
            if(g == "Y")
            {
                if(s[0] == '>')
                    p.ff = max(p.ff, a);
                else p.ss = min(p.ss, a);
            }
            else
            {
                if(s[0] == '>')
                    p.ss = min(p.ss, a-1);
                else p.ff = max(p.ff, a+1);
            }

        }
    } 
    if(p.ff > p.ss)
        cout << "Impossible" << endl;
    else cout << p.ff << endl;
    return 0;
}