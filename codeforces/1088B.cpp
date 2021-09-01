#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, k; cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    ll i = 0, mns = 0;
    while(k--)
    {
        if(i == n-1)
        {
            a[i] -= mns;
            mns += max(0LL, a[i]);
            cout << max(a[i], 0LL) << endl;;
        }
        else 
        {
            a[i] -= mns;
            mns += max(0LL, a[i]);
            if(a[i] > 0)
                cout << a[i] << endl;
            else k++;
            i++;
        }
    }
    return 0;
}