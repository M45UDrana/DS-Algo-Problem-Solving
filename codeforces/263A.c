#include <stdio.h>

int main()
{
    int a[25], i, n=0;
    for(i=0; i<25; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<25; i++){
        while(a[i]==1){

            while(i<=4){
                if(i<=2){
                    n=2-i;
                    n=n+2;
                }
                else{
                    n=i-2;
                    n=n+2;
                }
               break;
            }

            while(i<=9 && i>4){
                if(i<=7){
                    n=7-i;
                    n=n+1;
                }
                else{
                    n=i-7;
                    n=n+1;
                }
                break;
            }

            while(i<=14 && i>9){
                if(i<=12){
                    n=12-i;
                }
                else{
                    n=i-12;
                }
               break;
            }

            while(i<=19 && i>14){
                if(i<=17){
                    n=17-i;
                    n=n+1;
                }
                else{
                    n=i-17;
                    n=n+1;
                }
                break;
            }

            while(i<=24 && i>19){
                if(i<=22){
                    n=22-i;
                    n=n+2;
                }
                else{
                    n=i-22;
                    n=n+2;
                }
                break;
            }
            break;
        }
    }
    printf("%d", n);
    return 0;
}