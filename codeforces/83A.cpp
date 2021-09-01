#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0, cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1])
            cnt++;
        else 
        {
            ans += ((cnt*cnt)+cnt)/2;
            cnt = 1;
        }
    }
    ans += ((cnt*cnt)+cnt)/2;
    cout << ans << endl;
    return 0;
}