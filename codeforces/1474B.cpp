#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+7;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll d; cin >> d;
		ll x = d+1, ans;
		while(1)
		{
			if(isPrime(x))
			{
				ans = x;
				break;
			}
			x++;
		}
		x += d;
		while(1)
		{
			if(isPrime(x))
			{
				ans *= x;
				break;
			}
			x++;
		}
		cout << ans << endl;
	}
	return 0;
}