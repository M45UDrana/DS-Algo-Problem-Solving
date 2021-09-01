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
    IO;
    int t; cin >> t;
    while(t--)
    {
        map<pair<int,int>, int> m;
        int n; cin >> n;
        string s; cin >> s;
        int x = 0, y = 0;
        int l = 0, r = 0, ansl = 0, ansr = 3e5;
        m[mp(0, 0)] = 0;
        bool flg = false;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'L')
                x--;
            else if(s[i] == 'R')
                x++;
            else if(s[i] == 'U')
                y++;
            else y--;
            if(m.find(mp(x,y)) != m.end())
            {
                l = m[mp(x,y)]+1;
                r = i+1;
                flg = true;
                if((ansr - ansl) > (r - l))
                {
                    ansr = r;
                    ansl = l;
                }
            }
            m[mp(x,y)] = i+1;
        }
        if(flg)
            cout << ansl << " " << ansr << endl;
        else cout << -1 << endl;
    }
    return 0;
}