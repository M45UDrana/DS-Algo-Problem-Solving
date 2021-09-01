#include <stdio.h>

int main()
{
    int a, i, c=0;
    scanf("%d", &a);
    char b[a];
    scanf("%s", b);
    for(i=0; i<a; i++){
        if(b[i]==b[i+1]){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}