#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, k, probtime=0, contesttime, solveprob=0;
    scanf("%d%d", &n, &k);
    contesttime=240-k;

    for(int i=1; i<=n; i++){
        probtime += 5*i;
        if(contesttime>=probtime){
            solveprob++;
        }
        else break;
    }

    cout<<solveprob<<endl;

    return 0;
}