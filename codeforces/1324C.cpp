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
        string s; cin >> s;
        s = "R" + s + "R";
        int n = s.size();
        int l = 0;
        int ans = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] == 'R')
            {
                ans = max(ans, i-l);
                l = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}