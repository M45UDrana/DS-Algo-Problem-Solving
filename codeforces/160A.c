#include <stdio.h>

int main()
{
    int n, a=0, m, i, j, b=0, c=0;
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d",&ara[i]);
        a=a+ara[i];
    }
    a=a/2;

    for(j=0; j<(n-1); j++){
        for(i=0; i<(n-j); i++){
            if(ara[i]>ara[i+1]){
                m=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=m;
            }
        }
    }
    for(i=(n-1); i>=0; i--){
        b=b+ara[i];
        c++;
        if(a<b){
            printf("%d",c);
            break;
        }
    }

    return 0;
}