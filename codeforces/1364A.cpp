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
        int n, m; cin >> n >> m;
        int a[n], cnt = 0, sum = 0;
        pair<int,int> in;
        bool flg = true;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i]; a[i] %= m;
            sum += a[i];
            if(a[i])
            {
                if(flg)
                {
                    in.first = i+1;
                    flg = false;
                }
                in.second = i+1;
            }
            else cnt++;
        }
        if(cnt == n)
        {
            cout << -1 << endl;
            continue;
        }
        if(sum%m == 0)
            cout << max(n-in.first, in.second-1) << endl;
        else cout << n << endl;
    }
    return 0;
}