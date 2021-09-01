#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, a[10001];
    scanf("%d", &n);
    scanf("%d", &a[0]);
    int mins=a[0], maxs=a[0], amazing=0;


    for(int i=1; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]<mins){
            mins=a[i];
            amazing++;
        }
        else if(a[i]>maxs){
            maxs=a[i];
            amazing++;
        }

    }

    cout<<amazing<<endl;

    return 0;
}