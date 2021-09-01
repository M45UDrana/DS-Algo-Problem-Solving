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
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    string ans = "";
    vector<string>rans;
    for(int i = 0; i < n; i++)
    {
        string rst = s[i];
        reverse(rst.begin(), rst.end());
        for(int j = i+1; j < n; j++)
        {
            if(rst == s[j])
            {
                ans += s[i];
                rans.pb(s[j]);
                s[j] = "";
                s[i] = "";
                break;
            }
        }
    }
    if(ans.size() == 0)
    {
        string a, b;
        for(int i = 0; i < n; i++)
        {
            if(s[i].size() != 0)
            {
                a = b = s[i];
                reverse(b.begin(), b.end());
                if(a == b)
                {
                   cout << a.size() << endl << a << endl;
                   return 0; 
                }
            }
        }
        cout << 0 << endl;
    }
    else 
    {
        string a, b;
        for(int i = 0; i < n; i++)
        {
            if(s[i].size() != 0)
            {
                a = b = s[i];
                reverse(b.begin(), b.end());
                if(a == b)
                {
                    ans += a;
                    break;
                }
            }
        }
        for(int i = rans.size()-1; i >= 0; i--)
            ans += rans[i];
        cout << ans.size()<< endl;
        cout << ans << endl;
    }
    return 0;
}