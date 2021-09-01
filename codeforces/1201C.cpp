#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int in = n/2, mid = a[in];
    long long j = 1;
    for(int i = in+1; i < n; i++, j++)
    {
        if(k > (a[i]-a[i-1]) * j)
        {
            mid = a[i];
            k -= (a[i]-a[i-1]) * j;
        }
        else 
        {
            mid += (k / j);
            k = 0;
            break;
        }
    }
    if(k)
    {
        mid += (k/(in+1));
    }
    cout << mid << endl;
    return 0;
}