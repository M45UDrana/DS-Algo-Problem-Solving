#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m; cin >> n;
    m = (n*n+n)/2;
    if(m%2)
        cout << 1 << endl;
    else cout << 0 << endl;
    m /= 2;
    vector<int> v;
    while(m)
    {
        if(m >= n)
        {
            v.push_back(n);
            m -= n;
        }
        n--;
    }
    cout << v.size() << " ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " \n"[i+1 == v.size()];
    return 0;
}