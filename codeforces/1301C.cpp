#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
typedef long long ll;
#define d(a, b, c) cout<<a<<" "<<b<<" "<<c<<endl;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
    	ll n, m; cin >> n >> m;
    	ll ans = (n*(n+1))/2;
    	ll a = (n-m)/(m+1);
    	ll b = (n-m)%(m+1);
    	ll c = (m+1)-b;
    	ll ans1 = ((a*(a+1))/2)*c;
    	a++;
    	ans1 += ((a*(a+1))/2)*b;
    	
    	cout << ans - ans1 << endl;
    }
    return 0;
}