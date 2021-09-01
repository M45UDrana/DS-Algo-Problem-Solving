#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i, b, c=0;
    scanf("%s", a);
    b=strlen(a)-6;
    for(i=0; i<=b; i++){
        if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==a[i+4] && a[i]==a[i+5] && a[i]==a[i+6] ){
            printf("YES");
            c=1;
            break;
        }
    }
    if(c==0){
        printf("NO");
    }

    return 0;
}