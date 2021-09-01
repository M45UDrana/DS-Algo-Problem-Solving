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
    int a[n], b[m];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    int i = 0, j = 0;
    for(;i < n && j < m ; )
    {
        if(a[i] <= b[j])
        {
            i++;
            j++;
        }
        else if(a[i] > b[j])
        {
            j++;
        }
        else j++;
    }
    cout << n-i << endl;
    return 0;
}