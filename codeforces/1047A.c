#include <stdio.h>

int main()
{
    int n,a=1,b=1,c;
    scanf("%d", &n);
    c=n-2;
    if(c%3 == 0){
        c--;
        b++;
    }


    printf("%d %d %d",a,b,c );
    return 0;
}