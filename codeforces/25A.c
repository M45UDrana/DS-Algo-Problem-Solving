#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, j=0, k=0, l, m;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
            j++;
            l=i;
        }
        else if(a[i]%2==1)
        {
            k++;
            m=i;
        }
    }
    if(j>k)
    {
        printf("%d", m+1);
    }
    else
    {
        printf("%d", l+1);
    }

    return 0;
}