#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        n--;

        vector<pair<int,int> > ans;
        if(a[0][1] == a[n][n-1] and a[0][1] == a[n-1][n])
            ans.pb(mp(0,1));
        else if(a[0][1] == a[n][n-1])
        {
            ans.pb(mp(n,n-1));
            if(a[n][n-1] == '0')
                a[n][n-1] = '1';
            else a[n][n-1] = '0';
        }
        else if(a[0][1] == a[n-1][n])
        {
            ans.pb(mp(n-1,n));
            if(a[n-1][n] == '0')
                a[n-1][n] = '1';
            else a[n-1][n] = '0';
        }
        if(a[1][0] == a[n][n-1] and a[1][0] == a[n-1][n])
            ans.pb(mp(1,0));
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i].ff+1 << " " << ans[i].ss+1 << endl;
    }
    return 0;
}