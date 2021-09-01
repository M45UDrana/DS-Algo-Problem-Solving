#include <stdio.h>

int main()
{
   int n, i, j, b, count=0, a[3];
   scanf("%d", &n);
   for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[j]);
        }
        b=a[0]+a[1]+a[2];
        if(b>=2){
            count++;
        }
   }
   printf("%d", count);
    return 0;
}