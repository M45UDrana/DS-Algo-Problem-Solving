#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l, r, k;
    cin >> l >> r >> k;
    vector<long long > v;
    for(long long i = 0; i <= 64; i++)
    {
        if(pow(k, i) >= l)
        {
            if(pow(k, i) <= r)
                v.push_back(pow(k, i));
            else break;
        }
    }
    if(v.size() > 0)
    {
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    else cout << -1 << endl;
    return 0;
}