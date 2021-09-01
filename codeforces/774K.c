#include <stdio.h>

int vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' ||
            c == 'u' || c == 'y');
}

const int N = 1e5+5;

int main()
{
    char s[N];
    int n, i, j; 
    scanf("%d%s", &n, s);
    for(i = 0; i < n; i++)
    {
        if(vowel(s[i]))
        {
            j = 1;
            while(j+i < n && s[j+i] == s[i])
                j++;
            if(j == 2 && (s[i] == 'e' || s[i] == 'o'))
            {
                printf("%c%c", s[i], s[i]);
            }
            else
                printf("%c", s[i]);
            i += (j-1);
        }
        else printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}