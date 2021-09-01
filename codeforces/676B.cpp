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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
     
int main()
{
    int n, t; cin >> n >> t;
    vector<double>v[n];
    v[0].pb(t);
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            double x;
            if(j == 0)
                x = max((v[i-1][0]-1)/2.0, 0.0);
            else if(j == i)
                x = max((v[i-1][j-1]-1)/2.0, 0.0);
            else 
                x = max((v[i-1][j]-1)/2.0, 0.0)+max((v[i-1][j-1]-1)/2.0, 0.0);
            v[i].pb(x);

        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            if(v[i][j] >= 1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}