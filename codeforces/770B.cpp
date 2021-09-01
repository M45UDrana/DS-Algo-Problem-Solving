#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

ll dgt(ll x)
{
    ll sum = 0;
    while(x)
    {
        sum += x%10;
        x /= 10;
    }
    return sum;
}

int main()
{
    ll n; cin >> n;
    pair<ll,ll> ans;
    ans.first = n;
    ans.second = dgt(n);
    ll x;
    for(int i = 1; i <= 18; i++)
    {
        int t = i;
        x = n;
        while(t--)
            x /= 10;
        t = i;
        x--;
        while(t--)
            x = x*10+9;
        if(x < n and dgt(x) > ans.second)
        {
            ans.second = dgt(x);
            ans.first = x;
        }
    }
    cout << ans.first << endl; 
    return 0;
}