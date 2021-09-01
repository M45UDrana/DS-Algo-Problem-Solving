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
    IO;
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n+1] = {0};
        vector<int>ans, dis;
        bool flg = true;
        int pre = 0;
        for(int i = 0; i < n; i++)
        {
            int tmp; cin >> tmp;
            a[tmp]++;
            if(pre > tmp)
            {
                flg = false;
            }
            pre = tmp;
        }
        int j = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] == 0)
                dis.pb(i);
            else if(a[i] == 1)
                ans.pb(i);
            else if(a[i] > 1)
            {
                ans.pb(i);
                if(dis.size() > j)
                {
                    for(int k = 1; k < a[i]; k++)
                    {
                        if(dis.size() > j)
                            ans.pb(dis[j++]);
                        else flg = false;
                    }
                }
                else flg = false;
            }
        }
        int len = ans.size();
        if(flg && len == n)
        {
            for(int i = 0; i < len; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}