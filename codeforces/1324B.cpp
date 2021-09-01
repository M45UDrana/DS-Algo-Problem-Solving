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
        int n; cin >> n;
        vector<int> a[n+1];
        for(int i = 0, x; i < n; i++)
        {
            cin >> x;
            a[x].pb(i);
        }
        bool flg = true;
       for(int i = 0; i <= n; i++)
       {
           sort(a[i].begin(), a[i].end());
           if(a[i].size() > 1 and a[i][0]+1 != a[i][(int)a[i].size()-1])
           {
               cout << "YES" << endl;
               flg = false;
               break;
           }
       }
       if(flg)
           cout << "NO" << endl;
    }
    return 0;
}