#include <stdio.h>
int ara[1000];
int bsort( int n)
{
    int i, j, m;
    for(j=1; j<=n; j++)
    {
        for(i=1; i<(n-j); i++)
        {
            if(ara[i]>ara[i+1])
            {
                m=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=m;
            }
        }
    }
    return 0;
}

int main()
{
    int n,i,j,ans=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    bsort(n);

    while(ara[n-1]>=ara[0])
    {
        ara[0]++;
        ans++;
        ara[n-1]--;
        bsort( n);
    }



    printf("%d",ans);
}