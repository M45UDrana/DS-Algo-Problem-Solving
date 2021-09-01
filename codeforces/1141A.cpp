#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d, i=0;
    cin>>n>>m;
    d=m/n;
    if(m%n != 0)
    {
        cout<<-1;
        return 0;
    }
    while(d%2 == 0)
    {
        d/=2;
        i++;
    }
    while(d%3 == 0)
        {
            d/=3;
            i++;
        }
    
    if(d != 1)
    {
        cout<<-1;
        return 0;
    }
    cout<<i;
    return 0;
}