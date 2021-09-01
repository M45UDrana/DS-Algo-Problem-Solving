#include <stdio.h>

int main()
{
    int n, i, x, y, m, d, a, b;
    scanf("%d%d", &m, &d);

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d%d", &x, &y);
        if((x+y) <= (m+m-d)){
            if(x>=d){
                a=x-d;
            }
            else{
                    a=d-x;
            }
            if(y>=d){
                b=y-d;
            }
            else{
                    b=y-d;
            }

            if(y>=a && x>=b){
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
        else printf("NO\n");
    }

    return 0;
}