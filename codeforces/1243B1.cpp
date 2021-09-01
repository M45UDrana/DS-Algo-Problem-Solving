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
    int k; cin >> k;
    while(k--)
    {
        int n; cin >> n;
        string s, t; cin >> s >> t;
        int l = -1, r = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i] && l == -1)
                l = i;
            else if(s[i] != t[i] && r == -1)
            {
                r = i; break;
            }
        }
        
        if(l >= 0 && r >= 0)
            swap(s[l], t[r]);
        if(s == t)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}