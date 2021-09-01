#include <stdio.h>


int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d%d", &a, &b, &c);
    d=a+b*c;
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    h=a+b+c;
    if(d<e){
        d=e;
    }
    if(d<f){
        d=f;
    }
    if(d<g){
        d=g;
    }
    if(d<h){
        d=h;
    }

    printf("%d\n", d);
    return 0;
}