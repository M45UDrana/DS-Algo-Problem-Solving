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
        int n; cin >> n;
        string s, g, e; cin >> s;
        e = g = s;
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            char a, b;
            if(s[i] == '2')
            {
                a = '1';
                b = '1';
            }
            else if(s[i] == '1')
            {
                a = '0';
                b = '1';
            }
            else if(s[i] == '0')
            {
                a = '0';
                b = '0';
            }
            if(b > a and ok)
            {
                g[i] = b;
                e[i] = a;
                ok = false;
            }
            else if(ok) 
            {
                g[i] = a;
                e[i] = b;
            }
            else 
            {
                e[i] = s[i];
                g[i] = '0';
            }
        }
        cout << g << endl << e << endl;
    }
    return 0;
}