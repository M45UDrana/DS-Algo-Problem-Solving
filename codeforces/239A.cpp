#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
const int N = 1e5+1;

int main()
{
    int y, k, n;
    cin >> y >> k >> n;
    vector<int>v;
    int i = ((y + k-1) / k) * k;

    for( ; i <= n; i+=k)
    {
        if(i-y > 0)
            v.push_back(i-y);
    }

    if(!v.size())
        cout << -1 << endl;
    else
    {
        for(i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}