#include <stdio.h>
int main()
{
    int n,i,b=0, c=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
            b++;
        }
        else b=0;
        if(c<b){
            c=b;
        }
    }
    if(n>0){
    c++;
    }

    printf("%d", c);
    return 0;
}