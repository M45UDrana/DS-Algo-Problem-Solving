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
    int n, k, l, r, sa, sk; 
    cin >> n >> k >> l >> r >> sa >> sk;
    int a[n]; 
    
    for(int i = 0; i < k; i++)
        a[i] = sk / k;
    if(a[0] * k < sk)
    {
        int skk = a[0] * k;
        a[0] += min(sk-skk, r-a[0]);
        skk += a[0] - (skk/k);
        for(int i = 1; i < k && skk != sk; i++)
        {
            a[i]++; skk++;
        }
    }
    int rim = sa - sk, rmn = n - k;
    for(int i = k; i < n; i++)
        a[i] = rim / rmn;

    if(a[k] * rmn < rim)
    {
        rim -= a[k] * rmn;
        for(int i = k; i < n && rim > 0; i++)
        {
            a[i]++; rim --;
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}