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
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int sq = sqrt(n)+1;
        bool flg = true;
        for(int i = 2; i <= sq; i++)
        {
            if(!(n%i))
            {
                n += i;
                flg = false;
                break;
            }
        }
        if(flg)
            n += n;
        cout << n + (k-1)*2 << endl;
    }
    return 0;
}