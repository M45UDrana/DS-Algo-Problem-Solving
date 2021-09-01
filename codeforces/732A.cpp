#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r, a, shovel=0, l;
    scanf("%d%d", &k, &r);
    l=k;
    while(1)
    {
        a = k/10*10;
        shovel++;
        if(a == k || a+r == k)
        {
            break;
        }
        k = k + l;
    }

    cout<<shovel<<endl;

    return 0;
}