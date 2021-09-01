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

int a[30000] = {0};
int main()
{
    int n; cin >> n;
    for(int i = 4; i < n; i+= 2)
        if(!(i % 2))
            a[i] = 1;
    int nn = sqrt(n) + 1;
    for(int i = 3; i < nn; i++)
    {
        for(int j = i*i; j < n; j += 2*i)
        {
            a[j] = 1;
        }
    }
    int cnt = 0, ans = 0;
    for(int m = 6; m <= n; m++)
    {
        for(int i = 2; i < m; i++)
        {
            if(!a[i])
            {
                if(!(m % i))
                    cnt++;
            }
            if(cnt > 2)
                break;
        }
        if(cnt == 2)
            ans++;
        cnt = 0;
    }
    cout << ans << endl;
    return 0;
}