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
    int n; cin >> n;
    vector<int> a(n+1);
    vector<int> b(n+1, 0);
    vector<int>v, ind;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
        if(!a[i])
            ind.push_back(i);
    }
    for(int i = 1; i <= n; i++)
    {
        if(b[i] == 0) 
            v.push_back(i);
    }
    if(v[0] == ind[0])
        swap(v[0], v[v.size()-1]);
    for(int i = 1; i < ind.size(); i++)
        if(v[i] == ind[i])
            swap(v[i], v[i-1]);
    for(int i = 0; i < ind.size(); i++)
        a[ind[i]] = v[i];
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}