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
    int n, k; cin >> n >> k;
    int ans = 0;
    int a[n], b[10];
    for(int i = 0; i < n; i++)
    {
        mem(b, 0);
        int a; cin >> a;
        while(a)
        {
            b[a%10]++;
            a/=10;
        }
        for(int i = 0; i <= k; i++)
            if(!b[i]) goto next;
        ans++;
next:;
    }
    cout << ans << endl;

    return 0;
}