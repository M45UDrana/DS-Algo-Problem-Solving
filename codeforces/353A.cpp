#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    int n, a, b, cntl = 0, cntr = 0, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(a % 2 == 1 && b % 2 == 1)
            cnt++;
        else
        {
            if(a%2 == 1) cntl++;
            if(b%2 == 1) cntr++;
        }
    }
    if((cnt+cnt+cntl+cntr) % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }

    if(cnt % 2 == 0)
    {
        if(cntl % 2 == 1)   cout << 1 << endl;
        else                cout << 0 << endl;
    }
    else
    {
        if(cntl == 0 && cntr == 0)
            cout << -1 << endl;
        else if(cntl%2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}