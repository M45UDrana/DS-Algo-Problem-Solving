#include <stdio.h>

int main()
{
    int n, i, a=0;
    scanf("%d", &n);
    char st[n][3];

    for(i=0; i<n; i++){
        scanf("%s", st[i]);

        if(st[i][0]=='X' && st[i][1]=='+' && st[i][2]=='+'){
            a++;
        }
        else if(st[i][0]=='+' && st[i][1]=='+' && st[i][2]=='X'){
            a++;
        }
        else{
            a--;
        }
    }
    printf("%d", a);

    return 0;
}