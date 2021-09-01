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
    int n, ans = 0; cin >> n;
    int a[5002] = {0};
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        a[tmp]++;
    }
    vector<int> l, r;
    for(int i = 0; i < 5002; i++)
    {
        if(a[i] == 1)
        {
            ans++;
            l.pb(i);
        }
        else if(a[i] > 1)
        {
            ans+=2;
            l.pb(i);
            r.pb(i);
        }
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end(), greater<int>());
    int lsz = l.size(), rsz = r.size();

    if(rsz > 0)
        if(l[lsz-1] == r[0])
            ans--;
    cout << ans << endl;
    for(int i = 0; i < lsz; i++)
        cout << l[i] << " ";

    for(int i = 0; i < rsz; i++)
    {
        if(l[lsz-1] == r[i])
            continue;
        cout << r[i] << " ";
    }

    puts("");
    return 0;
}