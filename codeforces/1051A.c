#include <stdio.h>
#include <string.h>

int main()
{
    int n, a=0, A=0, num=0, i, j, x, y, z;
    scanf("%d", &n);
    char st[n][102];
    for (i=0; i<n; i++)
    {
        scanf("%s", st[i]);
    }

    for (i=0, j=0; i<n; j++)
    {
        if(st[i][j]>='a' && st[i][j]<='z' )
        {
            a++;
            x=j;
        }
        else if(st[i][j]>='A' && st[i][j]<='Z' )
        {
            A++;
            y=j;
        }
        else if(st[i][j]>='0' && st[i][j]<='9' )
        {
            num++;
            z=j;
        }
        if((strlen(st[i])-1) == j)
        {
            if(a==0)
            {
                if(A>num)
                {
                    st[i][y]='a';
                }
                else
                    st[i][z]='a';
            }
            if(a==0 && A==0){
                st[i][z-1]='A';
                A=1;
            }
            if(A==0)
            {
                if(a>num)
                {
                    st[i][x]='A';
                }
                else
                    st[i][z]='A';
            }
            if(A==0 && num==0){
                st[i][x-1]='1';
                num=1;
            }
            if(a==0 && num==0){
                st[i][y-1]='1';
                num=1;
            }
            if(num==0)
            {
                if(A>a)
                {
                    st[i][y]='1';
                }
                else
                    st[i][x]='1';
            }
            a=0;
            A=0;
            num=0;
            j=-1;
            i++;
        }
    }

    for (i=0; i<n; i++)
    {
        printf("%s\n", st[i]);
    }
    return 0;
}