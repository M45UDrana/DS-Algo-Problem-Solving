#include <bits/stdc++.h>

using namespace std;

#define pb(aa) push_back(aa)
#define mp(aa, bb) make_pair(aa,bb)

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    pair<int,int> in = {-1, (int)1e9};
    for(int i = 0; i < n; i++)
    {
        int sum = 0;  
        bool ok = true;
        for(int j = 0; j < n; j++)
        {
            if(j < i)
            {
                if(a[i]-(i-j)*k < 1)
                {
                    ok = false;
                    break;
                }
                sum += int (a[j] != a[i]-(i-j)*k);
            }
            else if(i < j)
                sum += int (a[j] != (j-i)*k + a[i]);
        }
        if(sum < in.second and ok)
            in = make_pair(i, sum);
    } 
    vector<pair<char,pair<int,int> > > ind;
    for(int j = 0, i = in.first; j < n; j++)
    {
        int x = abs(i-j)*k;
        if(j < i)
        {  
            if(a[j] > a[i]-x)
                ind.pb(mp('-', mp(j, a[j]-(a[i]-x))));
            else if(a[j] < a[i]-x)
                ind.pb(mp('+', mp(j, (a[i]-x)-a[j])));
        }
        else if(i < j)
        { 
            if(a[j] > a[i]+x)
                ind.pb(mp('-', mp(j, a[j]-(a[i]+x))));
            else if(a[j] < a[i]+x)
                ind.pb(mp('+', mp(j, (a[i]+x)-a[j])));
        }
    }
    cout << in.second << endl;
    for(int i = 0; i < ind.size(); i++)
        cout << ind[i].first << " " << ind[i].second.first+1
            << " " << ind[i].second.second << endl;
    return 0;
}