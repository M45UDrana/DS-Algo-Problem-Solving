#include <bits/stdc++.h>

using namespace std;

int diva[6], divb[6];

int divisor(int a, int d)
{
    while(a%d == 0)
    {
        a /= d;
        diva[d]++;
    }
    return a;
}
int divisorb(int a, int d)
{
    while(a%d == 0)
    {
        a /= d;
        divb[d]++;
    }
    return a;
}

int main()
{
    int a, b, ans = 0; cin >> a >> b;
    a = divisor(a,2);
    a = divisor(a, 3);
    a = divisor(a, 5);
    b = divisorb(b, 2);
    b = divisorb(b, 3);
    b = divisorb(b, 5);
    if(a != b)
        return !(cout << -1 << endl);
    ans += max(diva[2],divb[2])-min(diva[2],divb[2]);
    ans += max(diva[3],divb[3])-min(diva[3],divb[3]);
    ans += max(diva[5],divb[5])-min(diva[5],divb[5]);
    cout << ans << endl;
    return 0;
}