#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m = n, p = 0;
    vector<pair<int,int> > v;
    for(int i = n-1; i >= 0; i--)
    {
        a[i] += p;
        a[i] %= (n+1);
        int x = m-a[i];
        if(x < 0)
            x += (n+1);
        p += x;
        v.push_back(make_pair(i+1,x));
        m--;
    }
    cout << v.size()+1 << endl;
    for(int i = 0; i < v.size(); i++)
        cout << 1 << " " << v[i].first << " " << v[i].second << endl;
    cout << 2 << " " << n << " " << n+1 << endl;
    return 0;
}