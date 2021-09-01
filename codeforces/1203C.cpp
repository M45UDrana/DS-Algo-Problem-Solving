#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    
    int n;
    cin >> n;
    long long a[n], gcd, div, temp, ans = 0;
    cin >> a[0];
    gcd = a[0];
    for(int i=1; i<n;i++)
    {
        cin >> a[i];
        div = max(gcd, a[i]);
        gcd = min(gcd, a[i]);
        while(div)
        {
            if(div % gcd == 0)
            {
                break;
            }
            else
            {
                temp = div % gcd;
                div = gcd;
                gcd = temp;
            }
        }
 
    }
 
    if(gcd == 1)
    {
        cout << 1 << endl;
        return 0;
    }
 
    for(long long i = 1; i*i <= gcd; i++)
    {
        if(gcd % i == 0)
        {
        	if(gcd/i != i)
        		ans += 2;
        	else ans += 1;
        }
    }
 
    cout << ans << endl;
 
    return 0;
 
}