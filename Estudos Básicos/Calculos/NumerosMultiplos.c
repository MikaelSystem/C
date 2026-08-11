#include <stdio.h>
int main(){
    int a=0,b=0,i=0,j=1;

    scanf("%d", &a);
    scanf("%d", &b);

    int c[b];

    for (i=0;i<b;i++){
        c[i]=i;

    }
    
    int e[b];
    
    for (i=0;e[b-1]!=a;i++){
        
        e[i]=a;

        if (e[i]*c[i]==b || b*c[i]==a){
            printf("Sao Multiplos\n");
            break;
        }else if (e[b-1]==a && e[b-1]*c[i]!=b){
            printf("Nao sao Multiplos\n");
            break;
        }
        
    }

    return 0;
}
