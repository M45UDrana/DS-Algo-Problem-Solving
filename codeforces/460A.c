#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d", &n,&m);
    int a=m;
    while(1)
    {
        if(n>m)
        {
            n +=1;
            m +=a;
        }
        else if(m>n)
        {
            n--;
            break;
        }
        else
            break;
    }
    printf("%d\n", n+1);
    return 0;
}