#include <stdio.h>

int main()
{
    int n,a,b,c=0,i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d", &a, &b);
        if((a+b) > c)
        {
            c= a+b;
        }
    }
    printf("%d",c );
    return 0;
}