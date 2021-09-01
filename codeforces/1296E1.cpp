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
    string s; cin >> s;
    int a[n], b[n];
    a[0] = s[0];
    b[0] = 'a'-1;
    int ans[n];
    ans[0] = 0;
    for(int i = 1; i < n; i++)
    {
        if(s[i] >= a[i-1])
        {
            a[i] = int(s[i]);
            b[i] = b[i-1];
            ans[i] = 0;
        }
        else if(s[i] >= b[i-1])
        {
            b[i] = s[i];
            a[i] = a[i-1];
            ans[i] = 1;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
        cout << ans[i];
    cout << endl;
    return 0;
}