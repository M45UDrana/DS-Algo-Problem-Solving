#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if((n == 1 and a[0]) or sum)
    {
        cout << "YES" << endl;
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return 0;
    }
    int psum[n], ssum[n];
    for(int i = 0; i < n; i++)
    {
        if(i)
            psum[i] = a[i] + psum[i-1];
        else psum[i] = a[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(i != n-1)
            ssum[i] = a[i] + ssum[i+1];
        else ssum[i] = a[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        if(psum[i] and ssum[i+1])
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << 1 << " " << i+1 << endl;
            cout << i+2 << " " << n << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}