#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define PI 3.14159265
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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        int ev = 0, od = 0, pr = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i]%2)
                od++;
            else ev++;
            if(i < n-1 and a[i]+1 == a[i+1])
                pr++;
        }
        od %= 2;
        ev %= 2;
        if(od == 0 and ev == 0)
            cout << "YES" << endl;
        else if(od == 1 and ev == 1 and pr)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}