#include <stdio.h>

int ara[102];

int bsort( int n)
{
    int i, j, m;
    for(j=1; j<n; j++)
    {
        for(i=0; i<(n-j); i++)
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
    int n, m, i, p2;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }

    bsort(n);
    p2=m+ara[n-1];

    for(i=m; i!=0; i--){
        bsort(n);
        ara[0]++;
    }
    bsort(n);
    printf("%d\n%d", ara[n-1], p2);


    return 0;
}