#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &j);
        if(j==1){
            printf("HARD");
            break;
        }
        else if(i == (n-1)){
            printf("EASY");
        }
    }

    return 0;
}