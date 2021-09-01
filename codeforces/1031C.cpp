#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll a, b; cin >> a >> b;
    ll sm = a+b;
    ll lft = 0, rht = sm;
    while(lft < rht)
    {
        ll m = (lft+rht+1)/2;
        if((m*m+m)/2 <= sm)
            lft = m;
        else rht = m-1;
    }
    ll lst = lft;
    vector<ll> ans_a, ans_b;
    while(lst)
    {
        if(a >= lst)
        {
            ans_a.push_back(lst);
            a -= lst;
        }
        else
        {
            ans_b.push_back(lst);
            b -= lst;
        }
        lst--;
    }
    cout << ans_a.size() << endl;
    for(int i = 0; i < ans_a.size(); i++)
        cout << ans_a[i] << " \n"[i+1 == ans_a.size()];
    cout << ans_b.size() << endl;
    for(int i = 0; i < ans_b.size(); i++)
        cout << ans_b[i] << " \n"[i+1 == ans_b.size()];
    return 0;
}