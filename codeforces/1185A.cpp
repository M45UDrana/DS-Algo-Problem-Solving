#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int small=min(a, min(b, c));
    int big=max(a, max(b, c));
    int mid;
    if(small < a && a < big)
        mid=a;
    else if(small < b && b < big)
        mid=b;
    else
        mid=c;
    int ans=(((big - mid) < d) ? (d - ( big - mid)) : 0) + (((mid - small) < d) ? (d - (mid -small)) : 0);

    cout<<ans;

}