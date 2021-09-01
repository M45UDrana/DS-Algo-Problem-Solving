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
const int N = 1e5+5;
 
int main()
{
    int n; cin >> n;
    int a[n];
    bool b[N] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] <= n)
            b[a[i]] = 1;
    }
    vector<int>v;
    for(int i = 1; i <= n; i++)
    {
        if(!b[i])
            v.pb(i);
    }
    mem(b, 0);
    for(int i = 0, j = 0; i < n; i++)
    {
        if(!b[a[i]] && a[i] <= n)
        {
            cout << a[i] << " ";
            b[a[i]] = 1;
        }
        else
        {
            cout << v[j++] <<" ";
        }
    }
    puts("");
    return 0;
}