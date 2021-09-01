#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], d[100];
    int b, k=0, i;
    scanf("%s", a);
    b=strlen(a);
    if(b==1 && a[0]<91){
        a[0]=a[0]-'A' + 'a';
        printf("%c", a[0]);
        k=1;
    }
    else if(b==1 && a[0]>96){
        a[0]=a[0]- 'a' + 'A';
        printf("%c", a[0]);
        k=1;
    }

    else if(b!=1){
        for(i=0; i<b; ){
            if(a[i]<91){
                d[i]=a[i]-'A'+'a';
                i++;
            }
            else{
               break;
            }
        }
        if(b==i){
            d[b]='\0';
           printf("%s", d);
           k=1;
        }
    }

    if(b!=1 && a[0]>96){
        for(i=1; i<b; ){
            if(a[i]<91){
                d[i]=a[i]-'A'+'a';
                i++;
            }
            else{
               break;
            }
        }
        if(b==i){
            d[0]=a[0]- 'a' + 'A';
            d[b]='\0';
            printf("%s", d);
        k=1;
        }
    }
    a[b]='\0';
    if(k==0){
        printf("%s", a);
    }

    return 0;
}