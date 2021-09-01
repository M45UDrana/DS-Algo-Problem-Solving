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

vector<pii>v(100, mp(0, 0));
int mrk[200] = {0};
int main()
{
    string home, away;
    cin >> home >> away;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int mnt, num, color = 1; char nme, crd;
        cin >> mnt >> nme >> num >> crd;
        if(nme == 'a') num += 100;
        if(crd == 'r') color = 2;

        if(mrk[num] == 0)
        {
            mrk[num] = color;
            v[mnt].ff = num;
            v[mnt].ss = color;
        }
        else if(mrk[num] == 1)
        {
            mrk[num] = 2;
            v[mnt].ff = num;
            v[mnt].ss = 2;
        }
    }

    for(int i = 1; i < 100; i++)
    {
        if(v[i].ss == 2)
        {
            if(v[i].ff > 100)
                d(away, v[i].ff%100, i);
            else d(home, v[i].ff, i);
        }
    }

    return 0;
}