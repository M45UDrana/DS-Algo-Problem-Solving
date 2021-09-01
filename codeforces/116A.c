#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], m[n], i;
    m[0]=0;
    for(i=0; i<n; i++){
        scanf("%d%d", &a[i], &b[i]);
    }
    for(i=0; i<n; i++){
        m[i]= (m[i]-a[i]) + b[i];
        m[i+1]=m[i];
    }
    for(i=0; i<n-1; i++){
        if(m[i]>m[i+1]){
            m[i+1]=m[i];
        }
    }
    printf("%d", m[n-1]);

    return 0;
}