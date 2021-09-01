#include <stdio.h>

int main()
{
    int a, i, j, z1=0, z2=0, z3=0, z4=0, e=0, f=0, g=0, h=0;

    scanf("%d", &a);
    int b[a];
    for(i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    for(j=0; j<a; j++){

        if(b[j]==1){
            z1++;
        }
        else if(b[j]==2){
            z2++;
        }
        else if(b[j]==3){
            z3++;
        }
        else if(b[j]==4){
            z4++;
        }
    }
    if(z3<z1){
        z4=z4+z3;
        z1=z1-z3;
        e=z1/4;
        z4=z4+e;
        f=z1-(e*4);
    }
    else if(z3>z1){
        z4=z4+z3;
    }
    else if(z3==z1){
        z4=z4+z3;
    }
    if(z2>0){
        g=z2/2;
        z4=z4+g;
        h=z2-(g*2);
    }
    if(h>0 && f>0 && f==3){
        z4=z4+2;
    }
    else if(h>0 && f>0){
        z4++;
    }
    else if(h>0){
        z4++;
    }
else if(f>0){
        z4++;
    }
    printf("%d", z4);

    return 0;
}