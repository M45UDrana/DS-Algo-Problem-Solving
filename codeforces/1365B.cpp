#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define PI 3.14159265
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
        vector<pair<int,int> >v(n), sv(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i].ff;
            sv[i].ff = v[i].ff;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> v[i].ss;
            sv[i].ss = v[i].ss;
        }
        sort(sv.begin(), sv.end());
        bool ok = true;
        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i].ff != sv[i].ff)
                ok = false;
            if(v[i].ss)
                cnt1++;
            else cnt0++;
        }
        if(ok)
            cout << "Yes" << endl;
        else if(cnt0 and cnt1)
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}