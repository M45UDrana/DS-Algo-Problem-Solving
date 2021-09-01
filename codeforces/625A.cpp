#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 0;
    if(a > (b-c) and n >= b)
    {
        ans += (n-(b-1))/(b-c);
        if((n-(b-1))%(b-c))
            ans++;
        n -= (ans*(b-c));
    }
    ans += n/a;
    cout << ans << endl;
    return 0;
}