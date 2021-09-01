#include <stdio.h>
#include <string.h>

int main()
{
    int b, i, c=0;
    char a[100];
    scanf("%s", a);
    b=strlen(a);

    for(i=0; i<b ; i++){
        if(a[i]=='H' || a[i]=='9' || a[i]=='Q'){
            printf("YES");
            c=1;
            break;
        }
    }
    if(c==0) printf("NO");

    return 0;
}