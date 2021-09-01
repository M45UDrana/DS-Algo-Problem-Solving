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
    int n, m, k; cin >> n >> m >> k;
    int a[m+1];
    vector<int>fdr(21, 0);
    for(int i = 0; i <= m; i++)
        cin >> a[i];
    for(int i = 0; a[m] != 0; i++)
    {
        fdr[i] = a[m] & 1;
        a[m] >>= 1;
    }
    
    int cnt = 0, ans = 0;
    for(int i = 0; i < m; i++)
    {
        vector<int>v(21, 0);
        for(int j = 0; a[i] != 0; j++)
        {
            v[j] = a[i] & 1;
            a[i] >>= 1;
        }

        for(int j = 0; j <= 20; j++)
        {
            if(fdr[j] != v[j])
                cnt++;
        }
        if(cnt <= k)
            ans++;
        cnt = 0;
    }
    cout << ans << endl;

                
    return 0;
}