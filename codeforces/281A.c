#include <stdio.h>

int main()
{
    char a[1000];
    scanf("%s", a);
    if(a[0]>=97 && a[0]<=122){
        a[0]=a[0] - 'a' + 'A';
    }
    printf("%s", a);
    return 0;
}