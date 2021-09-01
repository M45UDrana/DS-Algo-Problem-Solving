#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c,d) cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

bool comp(pair<pair<int,int>, int> a,
        pair<pair<int,int>, int> b)
{
    if(a.ff.ff == b.ff.ff)
        return a.ff.ss > b.ff.ss;
    else return a.ff.ff < b.ff.ff;
}
int main()
{
    int n; cin >> n;
    vector<pair<pair<int,int>, int> > v(n);
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        v[i].ff.ff = x;
        v[i].ff.ss = y;
        v[i].ss = i;
    }
    sort(v.begin(), v.end(), comp);
    int a[n], mx = v[0].ff.ss, m_idx = 0;
    a[0] = 0;
    for(int i = 1; i < n; i++)
    {
        if(mx < v[i].ff.ss)
        {
            m_idx = i;
            mx = v[i].ff.ss;
        }
        a[i] = m_idx;
    }

    for(int i = n-1; i > 0; i--)
    {
        if(a[i] != i)
            return !(cout << v[i].ss+1 << " " << v[a[i]].ss+1 << endl);
    }
    cout << -1 << " " << -1 << endl;
    return 0;
}