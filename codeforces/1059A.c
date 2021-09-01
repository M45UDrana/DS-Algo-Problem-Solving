#include <stdio.h>

int main()
{
    int n,l,a,r=0, i,j;
    scanf("%d%d%d", &n, &l, &a);
    int st[n], en[n];
    for (i=0; i<n; i++)
    {
        scanf("%d%d", &st[i], &en[i]);
    }
    int s=0;
    for(i=0; i<n; i++)
    {
        r += (st[i]-s)/a;
        s=st[i]+en[i];
    }
    r+= (l-s)/a;

    printf("%d", r);
    return 0;
}