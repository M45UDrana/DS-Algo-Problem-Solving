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
    int n, m; cin >> n >> m;
    int team, ans = 0; 
    for(int i = 0; i <= n; i++)
    {
        int a = n - i, b = m - (i*2);
        team = min(a/2, b) + i;
        if(a >= 0 && b >= 0 && team > ans)
        {
            ans = team;
            team = 0;
        }
    }
    cout << ans << endl;


    return 0;
}