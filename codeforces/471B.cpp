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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
     
int main()
{
    IO;
    int n, cnt = 1; cin >> n;
    vector<pii> v(n);
    for(int i=0; i < n; i++)
    {
        cin >> v[i].ff;
        v[i].ss = i+1;
    }
    sort(v.begin(), v.end());
    for(int i=0; i < n-1; i++)
    {
        if(v[i].ff == v[i+1].ff)
            cnt++;
    }
    if(cnt < 3) 
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(int i=0; i < n; i++)
        cout << v[i].ss << " ";
    cout << '\n';
    bool flg = true;
    int ind;
    for(int i=0; i < n; i++)
    {
        if(flg && v[i].ff == v[i+1].ff)
        {
            ind = i;
            swap(v[i].ss, v[i+1].ss);
            flg = false;
        }
        cout << v[i].ss << " ";
    }
    cout << '\n';
    flg = true;
    for(int i=0; i < n; i++)
    {
        if(i > ind && flg && v[i].ff == v[i+1].ff)
        {
            swap(v[i].ss, v[i+1].ss);
            flg = false;
        }
        cout << v[i].ss << " ";
    }



    return 0;
}