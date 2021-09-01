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

const int N = 2e3+5;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m, sum = 0; cin >> n;
        m = n*2;
        int a[m+1];
        for(int i = 1; i <= m; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        vector<pair<int,int> > have[N];
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(i != j)
                    have[a[i]+a[j]].pb(mp(i,j));
            }
        }
        vector<pair<int,int> > ans;
        bool visit[m+1];
        memset(visit, 0, sizeof(visit));
        for(int gc = 2; gc <= 2000; gc++)
        {
            int x = sum%gc;
            if(x == 0)
            {
                for(int i = 1; i <= m; i++)
                {
                    if(!visit[i])
                    {
                        for(int j = 1; j <= m; j++)
                        {
                            if(!visit[j] and (a[i]+a[j])%gc == 0 and i!=j)
                            {
                                ans.pb(mp(i,j));
                                visit[i] = true;
                                visit[j] = true;
                                break;
                            }
                        }
                    }
                }
            }
            else if((int)have[x].size() > 0)
            {
                ans.pb(mp(have[x][0].ff, have[x][0].ss));
                visit[have[x][0].ff] = true;
                visit[have[x][0].ss] = true;
                for(int i = 1; i <= m; i++)
                {
                    if(!visit[i])
                    {
                        for(int j = 1; j <= m; j++)
                        {
                            if(!visit[j] and (a[i]+a[j])%gc == 0 and i!=j)
                            {
                                ans.pb(mp(i,j));
                                visit[i] = true;
                                visit[j] = true;
                                break;
                            }
                        }
                    }
                }
            }
            if((int) ans.size() >= n)
                break;
            else ans.clear();
        }
        for(int i = 1; i < ans.size(); i++)
            cout << ans[i].ff << " " << ans[i].ss << endl;
    }
    return 0;
}