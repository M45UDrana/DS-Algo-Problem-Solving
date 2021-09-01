#include <stdio.h>

int main()
{
    int n,i,j=0, ans=0;
    scanf("%d", &n);
    int hi[n], ai[n];
    for (i=0; i<n; i++)
    {
        scanf("%d%d", &hi[i], &ai[i]);
    }
    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {

            if(hi[i]==ai[j])
            {
                ans++;
            }
        }
    }
    printf("%d\n", ans);


    return 0;
}