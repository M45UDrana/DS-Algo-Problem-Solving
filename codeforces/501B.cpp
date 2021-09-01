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
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(a, b) memset(a,b,sizeof(a))
 
int main()
{
    int n; cin >> n;
    vector<pair<string, string>> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i].ff >> s[i].ss;
    vector<pair<string, string>> ans;
    string old, neew;
    for(int i = 0; i < n; i++)
    {
        if(s[i].ff.size())
        {
            old = s[i].ff;
            neew = s[i].ss;
            for(int j = i+1; j < n; j++)
            {
                if(s[j].ff == neew)
                {
                    s[j].ff.clear();
                    neew = s[j].ss;
                }
            }
            ans.pb(mp(old, neew));
            old.clear(); neew.clear();
        }
    }
    n = ans.size();
    cout << n << endl;
    for(int i = 0; i < n; i++)
    {
        d(ans[i].ff, ans[i].ss, "");
    }
    return 0;
}