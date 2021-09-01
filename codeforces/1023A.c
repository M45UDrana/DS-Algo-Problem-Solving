#include <stdio.h>

int main()
{
    int a, b, i, k=0, j;
    scanf("%d%d", &a, &b);
    char s[200000], t[200000];

    scanf("%s%s", s, t);

    for (i=0; s[i] !='*'; i++)
    {
        if(s[i]==t[i])
        {
            k=1;
        }
        else
        {
            k=0;
            break;
        }
    }

    if(k==1)
    {
        k=0;
        for (i=(a-1), j=(b-1); s[i] !='*'; i--, j--)
        {
            if(s[i]==t[j])
            {
                k=1;
            }
            else
            {
                k=0;
                break;
            }
        }
    }
        if(k==1)
        {
            k=0;
            for(i=0; i<b; i++)
            {
                if(t[i]>='a' && t[i]<='z')
                {
                    k=1;
                }

                else
                {
                    k=0;
                    break;
                }
            }
        }
        if((a-1) > b){
            k=0;
        }
        if(s[0] == '*' && a==1){
            k=1;
        }
        if(k==1)
        {
            printf("YES");
        }
        else printf("NO");

        return 0;
    }