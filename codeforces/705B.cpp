#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll cnt = 0;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        cnt += x-1;
        if(cnt%2)
            cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}