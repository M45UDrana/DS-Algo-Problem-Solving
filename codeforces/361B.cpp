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
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(a, b) memset(a,b,sizeof(a))
 
int main()
{
    int n, k; cin >> n >> k;
    if(n == k)
    {
        cout << -1 << endl;
        return 0;
    }
    int m = n-k, i = 1;
    if(m%2)
    {
        i = 2;
        cout << 1 << " ";
    }
    bool flg = false;
    for(; i <= m; i++)   
    {
        flg ^= 1;
        if(flg)
            cout << i+1 << " ";
        else cout << i-1 << " ";
    }
    for(int i = m+1; i <= n; i++)
        cout << i << " ";
    puts(" ");
    return 0;
}