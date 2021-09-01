#include <stdio.h>
#include <string.h>

int main()
{
    int b, l=0, i;
    char c, a[100];
    scanf("%s", a);
    b=strlen(a);
    c='a';
    for(i=0; i<b && c<='z'; i++){
        if(a[i]==c){
            l++;
            c++;
            i=-1;
        }
        else if(i==b-1){
            c++;
            i=-1;
        }
    }
    if(l%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

    return 0;
}