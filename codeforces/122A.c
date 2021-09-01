#include <stdio.h>

int main()
{
    int a=4, b=7, m=4, n=7, o=4, p=7, x, i, j;
    scanf("%d", &x);
    for(i=0, j=1;i<x ;i=0+j){
        m=(a * i) + m;
        n=(a * i) + n;
        o=(b * i) + o;
        p=(b * i) + p;
        if(x==m || x==n || x==o || x==p){
            printf("YES");
            break;
        }
        else if(x%m==0 || x%n==0 || x%o==0 || x%p==0){
            printf("YES");
            break;
        }
        else if(x==474 || x==477 || x==744|| x==747){
            printf("YES");
            break;
        }
        j=j*10;
    }
    if(i>x){
            printf("NO");
        }
    return 0;
}