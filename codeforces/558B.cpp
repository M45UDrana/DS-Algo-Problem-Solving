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
#define N 1000005
int a[N], l[N], r[N];
int main()
{
    int n, num = 0; cin >> n;
    pair<int,int>ans = {1, n};
    for(int i = 1; i <= n; i++)
    {
        int tmp; cin >> tmp;
        a[tmp]++; r[tmp] = i;
        if(l[tmp] == 0) l[tmp] = i;
        if(a[tmp] == num)
        {
            if((ans.ss + 1 - ans.ff) > (r[tmp] + 1 - l[tmp]))
            {
                ans.ff = l[tmp]; ans.ss = r[tmp];
            }
        }
        else if(a[tmp] > num)
        {
            ans.ff = l[tmp]; ans.ss = r[tmp];
            num = a[tmp];
        }
    }
   d(ans.ff, ans.ss, ""); 
    return 0;
}