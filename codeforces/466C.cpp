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
    ll psum[n], sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        psum[i] = sum;
    }
    ll s3 = sum / 3;
    if(s3 * 3 != sum || n < 3)
    {
        cout << 0 << endl;
        return 0;
    }
    ll cnt[n+2] = {0}, l = 0, ans = 0;
    for(int i = n-2; i >= 1; i--)
    {
        if(psum[n-1] - psum[i] == s3)
            l++;
        cnt[i+1] = l;
    }
    for(int i = 0; i < n-2; i ++)
    {
        if(psum[i] == s3)
            ans += cnt[i+2];
    }
    cout << ans << endl;

    return 0;
}