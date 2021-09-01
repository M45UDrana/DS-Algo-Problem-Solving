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
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
   sort(a, a+n); 
    for(int i = 0; a[0] != a[n-1]; i++)
    {
        for(int j = 1; j < n; j++)
        {
            a[j] %= a[0];
            if(!a[j])
                a[j] = a[0];
        }
        sort(a, a+n);
    }
    cout << a[0] * n << endl;
    return 0;
}