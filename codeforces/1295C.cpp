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
    int t; cin >> t;
    while(t--)
    {
        string s, t; cin >> s >> t;
        vector<int> v[26];
        for(int i = 0; i < s.size(); i++)
        {
            v[(int)s[i]-'a'].push_back(i);
        }
    
        int ans = 1, cur = 0;
        for(int i = 0; i < t.size(); i++)
        {
            int x = t[i]-'a';
            if(v[x].size() == 0)
            {
                ans = -1;
                break;
            }
            int in = lower_bound(v[x].begin(),v[x].end(), 
                    cur ) - v[x].begin();
            if(in == v[x].size())
            {
                ans++;
                in = lower_bound(v[x].begin(),
                        v[x].end(), cur) - v[x].end();
            }
            cur = v[x][in]+1;
        }
        cout << ans << endl;
    }
    return 0;
}