#include <stdio.h>
 
int main() {
    int N,MINUTO=0, HORA=0, SEGUNDO=0, check=0;
    scanf("%d", &N);
    
    for (int i=0;check!=3;i++) {
        
        if (N>=3600){
            HORA = N / 3600;
            N = N % 3600;
            check++;
        }
        if (N >= 60 && N <3600){
            MINUTO = N / 60;
            N = N % 60;
            check++;
        }
        if (N > 0 && N <= 59){
            SEGUNDO = N;
            check++;
        }
        
    }
         
    printf("%d:%d:%d\n", HORA, MINUTO, SEGUNDO);

    return 0;
}
