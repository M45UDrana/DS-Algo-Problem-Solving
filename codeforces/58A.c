#include <stdio.h>
#include <string.h>

int main()
{
    char a[5]="hello";
    char b[100], c[5];
    int i, d, j=0;
    scanf("%s", b);
    d=strlen(b);
    for(i=0; i<5; i++){
        for( ; j<d; j++){

            if(b[j]==a[i]){
                c[i]=a[i];
                j++;
                break;
            }
        }
    }
    if(c[0]==a[0] && c[1]==a[1] && c[2]==a[2] && c[3]==a[3] && c[4]==a[4]){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}