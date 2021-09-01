#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, b;
    scanf("%d", &n);
    char a[n][101];

    for(i=0; i<n ; i++){
        scanf("%s", a[i]);
    }
    for(i=0; i<n ; i++){
        if(strlen(a[i])>10){
            b=strlen(a[i])-2;
            printf("%c%d%c\n", a[i][0], b, a[i][b+1]);
        }

        else{
            printf("%s\n", a[i]);
        }
    }
    return 0;
}