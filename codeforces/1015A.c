#include <stdio.h>

int main()
{
    int n,m,i, j=0;
    scanf("%d%d",&n,&m);
    int l[100], r[100], a[200], b[100];

    for(i=0; i<=m; i++)
    {
        a[i]=0;
    }

    for(i=0; i<n; i++)
    {
        scanf("%d%d", &l[i], &r[i]);
        for(j=l[i]; j<=r[i]; j++)
        {
            a[j]++;
        }
    }
    j=0;

    for(i=1; i<=m; i++)
    {
        if(a[i]==0)
        {
            b[j++]=i;
        }
    }
    printf("%d\n",j);
    for(i=0; i<j; i++)
    {
        printf("%d\n",b[i]);
    }

    return 0;
}