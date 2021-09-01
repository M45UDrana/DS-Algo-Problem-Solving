#include <stdio.h>
#include <string.h>
int main()
{
    int i, len;
    char j;
    char st[100];
    scanf("%s", st);
    len = strlen(st);
    for(i=0; i<len; i++){
        for(j='A'; j<='Z'; j++){
            if(st[i]==j){
                st[i]= st[i] - 'A' + 'a';
            }
        }
        if( st[i]!='a' && st[i]!='e' && st[i]!='i' && st[i]!='o' && st[i]!='u' && st[i]!='y'){
            printf(".%c", st[i]);
        }
    }
    return 0;
}