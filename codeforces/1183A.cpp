#include <bits/stdc++.h>

using namespace std;

int digitsum(int a)
{
    int sum=0;
   while(a)
    {
        sum += a % 10;
        a = a/10;
    }

    return sum;
}

int main()
{
    int a, sum;
    scanf("%d", &a);
    sum=digitsum(a);
    while(1)
    {
        if(sum % 4 == 0)
        {
            printf("%d\n", a);
            return 0;
        }
        else
            {
                a++;
                sum=digitsum(a);
            }
    }
}