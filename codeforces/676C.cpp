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
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(a, b) memset(a,b,sizeof(a))

int main()
{
    int n, k, ans = 1, cnta = 0, cntb = 0; cin >> n >> k;
    string st; cin >> st;
    for(int l = 0, r = 0; r < n; r++)
    {
        if(st[r] == 'a')
            cnta++;
        else if(st[r] == 'b')
            cntb++;
        while(min(cnta, cntb) > k)
        {
            if(st[l] == 'a')
            {
                cnta--;
                l++;
            }
            else if(st[l] == 'b')
            {
                cntb--;
                l++;
            }
        }
        ans = max(ans, r+1-l); 
    }
    cout << ans << endl;
    return 0;
}