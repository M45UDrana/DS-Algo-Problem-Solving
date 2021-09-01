#include <stdio.h>
int main()
{
    int x,i,a,b,c,d;
    scanf("%d", &x);
    while(1)
    {
        x++;
        a=x-(x/10*10);
        b=(x-(x/100*100))/10;
        d=(int)x/1000;
        c=(x-d*1000)/100;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            printf("%d\n", x);
            break;
        }
    }
    return 0;
}