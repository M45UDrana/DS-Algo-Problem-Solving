#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, k;

ll calc(ll d)
{
//    cout << d << " " << d-d/n << endl;
    return d - d/n;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ll left = 1, right = k*n, mid;
        while(left <= right)
        {
            mid = left + (right-left)/2;
         //   cout << mid <<' '<<left<<' '<<right<<endl;
            if(calc(mid) > k)
                right = mid-1;
            else if(calc(mid) < k)
                left = mid+1;
            else break;
        }
        if(!(mid%n))
            mid--;
        cout << mid << endl;
    }
    return 0;
}