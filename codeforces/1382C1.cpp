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
#define IO ios_base::sync_with_stdio(0);

string sbs = "abacaba";

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> ans;
        string s, g; cin >> s >> g;
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] != g[i])
            {
                if(g[i] == s[0])
                {
                    ans.pb(0);
                    if(s[0] == '1')
                        s[0] = '0';
                    else s[0] = '1';
                }
                for(int j = 0; j <= i; j++)
                {
                    if(s[j] == '1')
                        s[j] = '0';
                    else s[j] = '1';
                }
                reverse(s.begin(), s.begin()+i+1);
                ans.pb(i);
            }
        }
        cout << ans.size();
        for(int i = 0; i < ans.size(); i++)
            cout << " " << ans[i]+1;
        cout << endl;
    }
    return 0;
}