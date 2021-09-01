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
    IO;
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int high = 1, low = 1, ans = 1;
    for(int i = 0, j; i < n; i++)
    {
        int tmp = a[i];
        int l = i;
        for(j = i+1; j < n; j++)
        {
            if(tmp == a[j])
                i = j;
            if(tmp != a[j] && a[j]+1 != tmp)
                break;
        }
        ans = max(ans, j-l);
    }
    for(int i = 0, j; i < n; i++)
    {
        int tmp = a[i];
        int l = i;
        for(j = i+1; j < n; j++)
        {
            if(tmp == a[j])
                i = j;
            if(tmp != a[j] && a[j]-1 != tmp)
                break;
        }
        ans = max(ans, j-l);
    }
    cout << ans << endl;

    return 0;
}