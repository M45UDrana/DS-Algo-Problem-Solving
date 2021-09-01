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
    int n, m, ans = 0; cin >> n >> m;
    string s; cin >> s;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == '.' && s[i+1] == '.')
            ans++;

    }
    while(m--)
    {
        int l; cin >> l; l--;
        char a; cin >> a;
        int precnt = 0, tncnt = 0;
        if(l > 0)
        {
        if(s[l] == '.' && s[l-1] == '.')
            precnt++;
        }
        if(l < n-1)
        {
        if(s[l] == '.' && s[l+1] == '.')
            precnt++;
        }
        s[l] = a;
        if(l > 0)
        {
        if(s[l] == '.' && s[l-1] == '.')
            tncnt++;
        }
        if(l < n-1)
        {
        if(s[l] == '.' && s[l+1] == '.')
            tncnt++;
        }
        ans += (tncnt - precnt);
        cout << ans << endl;
    }
    return 0;
}