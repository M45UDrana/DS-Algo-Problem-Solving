#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int,int> > v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    if(n == 1 or (n == 2 and v[0].first == v[1].first))
    {
        cout << -1 << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    cout << n-1 << endl;
    for(int i = 1; i < n; i++)
    {
        if(i == 1)
            cout << v[i].second;
        else cout << " " << v[i].second;
    }
    cout << endl;
    return 0;
}