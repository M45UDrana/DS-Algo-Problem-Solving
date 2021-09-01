#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 2e5+5;

inline ll getint(){
  ll _x=0,_tmp=1; char _tc=getchar();    
  while( (_tc<'0'||_tc>'9')&&_tc!='-' ) _tc=getchar();
  if( _tc == '-' ) _tc=getchar() , _tmp = -1;
  while(_tc>='0'&&_tc<='9') _x*=10,_x+=(_tc-'0'),_tc=getchar();
  return _x*_tmp;
}

int main()
{
    int n = getint();
    int m = getint();
    vector<pair<int,int> > v[N];
    for(int i = 0; i < n; i++)
    {
        int l = getint();
        int r = getint();
        int cst = getint();
        v[r+1-l].push_back(make_pair(l,cst));
    }
    ll ans = 1e10;

    for(int i = 1; i <= m; i++)
        sort(v[i].begin(),v[i].end());

    for(int i = 1; i < m; i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            int l = v[i][j].first;
            int r = l+i-1, d = m-i;
            int st = 0;
            while(st < v[d].size())
            {
                int it = lower_bound(v[d].begin()+st,v[d].end(),
                        make_pair(r+1,0)) - v[d].begin();

                if(it < v[d].size())
                {
                    int x = v[d][it].first;
                    int y = x+d-1;
                    if((l <= x and x <= r) or (l <= y and
                                y <= r))
                        continue;
                    ans = min(ans, (ll) v[i][j].second
                            + v[d][it].second);
                }
                st = it+1;
            }
        }
    }
    if(ans > (ll) 3e9)
        cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}