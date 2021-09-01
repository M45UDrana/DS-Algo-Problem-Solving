#include <stdio.h>

int main()
{
    int n, k, i, b, c=0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    b=a[k-1];
    for(i=0; i<n; i++){
        if(0<a[i] && a[i]>=b){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}