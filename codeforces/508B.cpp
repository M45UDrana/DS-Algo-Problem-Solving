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
    string s; cin >> s;
    vector<pii>v;
    int i, a, sz = s.size();

    for(i = 0; i < sz-1; i++)
    {
        a = int(s[i] - '0');
        if(!(a % 2))
            v.pb(make_pair(a, i));
    }
    int d = int(s[sz-1] - '0');
    sz = v.size();
    if(!sz)
    {
        cout << -1 << endl;
        return 0;
    }
    for(i = 0; i < sz; i++)
    {
        if(v[i].ff < d)
        {
            swap(s[v[i].ss], s[s.size()-1]);
            cout << s << endl;
            return 0;
        }
    }
    for(i = sz-1; i >= 0; i--)
    {
        if(v[i].ff > d)
        {
            swap(s[v[i].ss], s[s.size()-1]);
            cout << s << endl;
            return 0;
        }
    }
    swap(s[v[0].ss], s[s.size()-1]);
    cout << s << endl;
    return 0;
}