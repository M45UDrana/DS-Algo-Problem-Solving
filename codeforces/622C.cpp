#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+2;

vector<pair<int,int> > v[N];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m; cin >> n >> m;
    int a[n+1];
    for(int i = 1; i <= n; i++)
       cin >> a[i];
   for(int i = 1; i <= n; i++)
   {
       if(i == 1)
       {
           if(n != 1 and a[i] != a[i+1])
           {
               v[a[i]].push_back(make_pair(2, a[i+1]));
           }
       }
       else if(i == n)
       {
           if(a[i] != a[i-1])
               v[a[i]].push_back(make_pair(i-1, a[i-1]));
       }
       else
       {
           if(a[i] != a[i+1])
               v[a[i]].push_back(make_pair(i+1, a[i+1]));
           if(a[i] != a[i-1])
               v[a[i]].push_back(make_pair(i-1, a[i-1]));
       }
   } 
   for(int i = 1; i < N; i++)
       sort(v[i].begin(),v[i].end());

   while(m--)
   {
       int l, r, x; cin >> l >> r >> x;
       int in = a[l];
       int i = lower_bound(v[in].begin(),v[in].end(),make_pair(l,0))
           - v[in].begin();
       if(i < v[in].size() and v[in][i].first <= r and v[in][i].second != x)
       {
           cout << v[in][i].first << '\n';
           continue;
       }
       in = a[r];
       i = lower_bound(v[in].begin(),v[in].end(),make_pair(l,0))
           - v[in].begin();
       if(i < v[in].size() and v[in][i].first <= r and v[in][i].second != x)
       {
           cout << v[in][i].first << '\n';
           continue;
       }
       if(a[l] != x)
       {
           cout << l << endl;
           continue;
       }
       cout << -1 << '\n';
   }
   return 0;
}