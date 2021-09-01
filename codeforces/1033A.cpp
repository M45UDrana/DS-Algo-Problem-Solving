#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ax, ay, bx, by, cx, cy;
    scanf("%d%d%d%d%d%d%d", &n, &ax, &ay, &bx, &by, &cx, &cy);
    if(ax>bx && ax>cx && ay>by && ay>cy)
    {
        printf("YES");
    }
    else if(ax<bx && ax<cx && ay>by && ay>cy)
    {
        printf("YES");
    }
    else if(ax<bx && ax<cx && ay<by && ay<cy)
    {
        printf("YES");
    }
    else if(ax>bx && ax>cx && ay<by && ay<cy)
    {
        printf("YES");
    }
    else if(ax>bx && ax>cx && ay>by && ay>cy)
    {
        printf("yes");
    }
    else printf("NO");

    return 0;
}