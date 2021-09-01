#include <stdio.h>

int main()
{
    long long n, m, a, f, c, d;
    scanf("%lld %lld %lld", &n, &m, &a );
    if(n==a && m==a){
       c = 1;
       d = 1;
    }
    else if(m%a==0){
        c = (m/a) ;
    }

    else if(n%a==0){
        d = (n/a) ;
    }

    else{
        c = (m/a)+1 ;
        d= (n/a) +1;
    }
    f = c*d;
    printf("%lld", f);

    return 0;
}