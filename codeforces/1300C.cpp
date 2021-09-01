#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int pre[n], suf[n];
    for(int i = 0; i < n; i++)
    {
        if(!i)
            pre[i] = (~a[i]);
        else pre[i] = (pre[i-1] & (~a[i]));
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(i == n-1)
            suf[i] = (~a[i]);
        else suf[i] = (suf[i+1] & (~a[i]));
    }
    int xorr = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(i != 0 and i != n-1)
        {
            if(xorr < (a[i] & (pre[i-1] & suf[i+1])))
            {
                xorr = (a[i] & (pre[i-1] & suf[i+1]));
                ans = i;
            }
        }
        else if(!i)
        {
            if(xorr < (a[i] & suf[i+1]))
            {
                xorr = a[i] & suf[i+1];
                ans = i;
            }
        }
        else
        {
            if(xorr < (a[i] & pre[i-1]))
            {
                xorr = a[i] & pre[i-1];
                ans = i;
            }
        }
    }
    cout << a[ans] << " ";
    for(int i = 0; i < n; i++)
        if(i != ans)
            cout << a[i] << " ";
    cout << endl;
    return 0;
}