#include <bits/stdc++.h>

using namespace std;
const int sz = 1e6 + 1;
int main()
{

    int n;
    scanf("%d", &n);
    while(n--)
    {

        char arr1[sz], arr2[sz];
        int i, j, k=0;
        scanf("%s%s", arr1, arr2);
        int strlen1=strlen(arr1), strlen2=strlen(arr2);
        if(strlen1 > strlen2)
        {
            printf("NO\n");
            continue;
        }
        if(arr1[0] == arr2[0])
        {
            for(i=1, j=1; j<strlen2; )
            {

                if(arr1[i]==arr2[j])
                {
                    i++;
                    j++;
                }
                else if(arr1[i-1]==arr2[j])
                {
                    j++;
                }
                else
                {
                    printf("NO\n");
                    k++;
                    break;
                }

            }

        }
        else
        {
            printf("NO\n");
            k++;
        }

        if(strlen1==i && strlen2==j)
        {
            printf("YES\n");
        }
        else if(k==0)
            printf("NO\n");

        //printf("\n--%d %d - %d %d\n", strlen1, i, strlen2, j);
    }

    return 0;
}