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
    int a[n][27];
    for(int i = 1; i <= 26; i++)
        a[0][i] = 'a'-1;
    a[0][1] = s[0];
    int ans[n];
    ans[0] = 1;
    int color = 1;
    for(int i = 1; i < n; i++)
    {
        bool flg = true;
        for(int j = 1; j <= 26; j++)
        {
            if(s[i] >= a[i-1][j] and flg)
            {
                a[i][j] = s[i];
                flg = false;
                ans[i] = j;
                color = max(color, j);
            }
            else a[i][j] = a[i-1][j];
        }
    }
    cout << color << endl;
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}