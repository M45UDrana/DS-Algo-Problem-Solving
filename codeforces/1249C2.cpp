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
    int q; cin >> q;
    ll a[39], ar[39];
    ar[0] = 1; ar[1] = 3;
    for(ll i = 2; i < 39; i++)
    {
        ar[i] = ar[i-1] * 3;
    }
    
    while(q--)
    {
        for(int i = 0; i < 39; i++)
            a[i] = ar[i];

        ll n; cin >> n;
        int i = 38;
        ll b = n, sum = 0, ans = 1350851717672992089;
        while( i >= 0)
        {
            if(b-a[i] >= 0)
            {
                b -= a[i];
                sum += a[i];
                a[i] = 0;
                int j = 0;
                while(b > a[j]) j++;
                ans = min(ans,sum + a[j]);
            }
            i--;
        }
        if(b == 0)
            cout << n << endl;
        else 
        {
            i = 0;
            while(n > a[i]) i++;
            cout <<min(a[i], ans) << endl;
        }
    }
    return 0;
}