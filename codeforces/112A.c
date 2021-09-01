#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);
    int len, i, j;
    len=strlen(a);
    for(i=0; i<len; i++){

        for(j='A'; j<='Z'; j++){
            if(a[i]==j){
                a[i]=(a[i]-'A')+'a';
            }
        }
    }

    for(i=0; i<len; i++){

        for(j='A'; j<='Z'; j++){
            if(b[i]==j){
                b[i]=(b[i]-'A')+'a';
            }
        }
    }


    for(i=0; i<len; i++){
        if(a[i]>b[i] ){
            printf("1");
            break;
        }
        else if(a[i]<b[i]){
            printf("-1");
            break;
        }
        else if(i==len-1){
            printf("0");
        }
    }

    return 0;
}