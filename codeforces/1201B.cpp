#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, mx = 0; cin >> n;
    int a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(a[i], mx);
    }
    if(!(sum%2) && (sum - mx) >= mx)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}