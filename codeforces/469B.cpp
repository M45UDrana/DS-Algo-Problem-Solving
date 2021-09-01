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
    int p, q, l, r; cin >> p >> q >> l >> r;
    vector<pii>v(p), v1(q);
    int a, b;
    for(int i = 0; i < p; i++)
        cin >> v[i].ff >> v[i].ss;
    for(int i = 0; i < q; i++)
        cin >> v1[i].ff >> v1[i].ss;
    int ans = 0;
    for( ; l <= r; l++)
    {
        bool flg = false;
        for(int i = 0; i < q; i++)
        {
            a = v1[i].ff + l;
            b = v1[i].ss + l;
            for(int j = 0; j < p; j++)
            {
                if((v[j].ff<a && v[j].ss<a)||(b<v[j].ff && b<v[j].ss))
                    continue;
                else flg = true;
                if(flg)
                {
                    ans++;
                    break;
                }
            }
            if(flg)
                break;
        }
    }
    cout << ans << endl;
    return 0;
}