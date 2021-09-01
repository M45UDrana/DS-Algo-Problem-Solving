#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);
    int len, i, j, m=0;
    char n[3]={ '1', '2', '3' };
    len=strlen(a);
    char b[len];
    for(i=0; i<3; i++){

        for(j=0; j<len; j++){
            if(a[j]==n[i]){

                b[m]=n[i];
                b[m+1]='+';
                m=m+2;
            }
        }
    }
    for(i=0; i<len; i++){
        printf("%c", b[i]);
    }
    return 0;
}