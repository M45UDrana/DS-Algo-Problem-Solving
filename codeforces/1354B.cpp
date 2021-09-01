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

const int oo = 1e9+7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n = s.size(), ans = oo;
        int i1 = -1, i2 = -1, i3 = -1;
        int a[3];
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                i1 = i;
            else if(s[i] == '2')
                i2 = i;
            else i3 = i;
            a[0] = i1; a[1] = i2; a[2] = i3;
            sort(a, a+3);
            if(a[0] != -1)
                ans = min(ans, a[2]-a[0]+1);
        }
        if(ans == oo)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}