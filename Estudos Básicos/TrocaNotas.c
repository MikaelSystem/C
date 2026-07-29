#include <stdio.h>
 
int main() {
    int N, N100=0,N50=0,N20=0,N10=0,N5=0,N2=0,N1=0,i=0;
    
    scanf("%d", &N);
    i+=N;
    
    for (;i>=100;i-=100){
        N100++;
    }for (;i>=50 && i<100;i-=50){
        N50++;
    }for (;i>=20 && i<50;i-=20){
        N20++;
    }for (;i>=10 && i<20;i-=10){
        N10++;
    }for (;i>=5 && i<10;i-=5){
        N5++;
    }for (;i>=2 && i<5;i-=2){
        N2++;
    }for (;i>0 && i<2;i-=1){
        N1++;
    }
    
    printf("%d\n",N);
    printf("%d nota(s) de  R$ 100,00\n", N100);
    printf("%d nota(s) de  R$ 50,00\n", N50);
    printf("%d nota(s) de  R$ 20,00\n", N20);
    printf("%d nota(s) de  R$ 10,00\n", N10);
    printf("%d nota(s) de  R$ 5,00\n", N5);
    printf("%d nota(s) de  R$ 2,00\n", N2);
    printf("%d nota(s) de  R$ 1,00\n", N1);
    
    return 0;
}
