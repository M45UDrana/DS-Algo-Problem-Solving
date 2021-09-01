#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, k; cin >> n >> k;
    ll d = sqrt(n)+.5;
    vector<ll>div;
    for(ll i = 1; i <= d; i++)
    {
        if(!(n%i))
        {
            div.push_back(i);
            if(i != n/i)
                div.push_back(n/i);
        }
    }
    sort(div.begin(), div.end());
    if(k > (int)div.size())
        return !(cout << -1 << endl);
    cout << div[k-1] << endl;

    return 0;
}