#include <bits/stdc++.h>
 
using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);
 
int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int sum = (a[0] + a[1] + a[2] + a[3]);
 
    int tmp = a[0];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[1];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[2];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[3];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[0]+a[1];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[0]+a[2];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[0]+a[3];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[1]+a[2];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[1]+a[3];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[3]+a[2];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[0]+a[1]+a[2];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[0]+a[1]+a[3];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[0]+a[2]+a[3];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    tmp = a[1]+a[2]+a[3];
    if(tmp * 2 == sum)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}