#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<int,int> > v(n);
    for(int i = 1; i < n; i++)
        v[i] = make_pair(min(a[i],a[i-1]), max(a[i],a[i-1]));
    for(int i = 1; i < n; i++)
    {
        int x = v[i].first, y = v[i].second;
        for(int j = 1; j < n; j++)
        {
            if(i == j)
                continue;
            int x1 = v[j].first, y1 = v[j].second;
            if((x1 < x and x < y1) and (x1 > y or y > y1))
                return !(cout << "yes" << endl);
            if((x1 > x or x > y1) and (x1 < y and y < y1))
                return !(cout << "yes" << endl);
        }
    }
    cout << "no" << endl;

    return 0;
}