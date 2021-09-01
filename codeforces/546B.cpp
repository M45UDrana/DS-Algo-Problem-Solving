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
const int N = 7e3;
int ar[N] = {0};
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ar[a[i]] = 1;
    }
    sort(a, a+n);
    vector<int>v;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] == a[i+1])
            v.pb(a[i]);
    }
    int ans = 0, sz = v.size();
    for(int i = 0, j; i < sz; i++)
    {
        j = v[i]+1;
        while(ar[j])
            j++;
        ans += j - v[i];
        ar[j] = 1;
    }
    cout << ans << endl;

    return 0;
}