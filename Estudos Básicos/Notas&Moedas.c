#include <stdio.h>
#include <math.h>
int main()
{
    int N100=0,N50=0,N20=0,N10=0,N5=0,N2=0,N1=0,N050=0,N025=0,N010=0,N005=0,N001=0;
    double dinheiro=0.00;

    scanf("%lf", &dinheiro);

    for (int i=0;dinheiro!=0.00;i++){
        if (dinheiro >= 100){
            N100 = dinheiro / 100;
            dinheiro = fmod(dinheiro,100);
        }
        else if (dinheiro < 100 && dinheiro >= 50){
            N50 = dinheiro / 50;
            dinheiro = fmod(dinheiro,50);
        }
        else if (dinheiro < 50 && dinheiro >= 20){
            N20 = dinheiro / 20;
            dinheiro = fmod(dinheiro,20);
        }
        else if (dinheiro < 20 && dinheiro >= 10){
            N10 = dinheiro / 10;
            dinheiro = fmod(dinheiro,10);
        }
        else if (dinheiro < 10 && dinheiro >= 5){
            N5 = dinheiro / 5;
            dinheiro = fmod(dinheiro,5);
        }
        else if (dinheiro < 5 && dinheiro >= 2){
            N2 = dinheiro / 2;
            dinheiro = fmod(dinheiro,2);
        }

        //Moedas

        else if (dinheiro < 2 && dinheiro >= 1){
            N1 = dinheiro / 1;
            dinheiro = fmod(dinheiro,1);
        }
        else if (dinheiro < 1 && dinheiro >= 0.50){
            N050 = dinheiro / 0.50;
            dinheiro = round((dinheiro - N050 * 0.50) * 100) / 100;
        }
        else if (dinheiro < 0.50 && dinheiro >= 0.25){
            N025 = dinheiro / 0.25;
            dinheiro = round((dinheiro - N025 * 0.25) * 100) / 100;
        }
        else if (dinheiro < 0.25 && dinheiro >= 0.10){
            N010 = dinheiro / 0.10;
            dinheiro = round((dinheiro - N010 * 0.10) * 100) / 100;
        }
        else if (dinheiro < 0.10 && dinheiro >= 0.05){
            N005 = dinheiro / 0.05;
            dinheiro = round((dinheiro - N005 * 0.05) * 100) / 100;
        }
        else if (dinheiro < 0.05 && dinheiro >= 0.01){
            N001 = dinheiro / 0.01;
            dinheiro = round((dinheiro - N001 * 0.01) * 100) / 100;
            dinheiro = 0.0000;
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", N100);
    printf("%d nota(s) de R$ 50.00\n", N50);
    printf("%d nota(s) de R$ 20.00\n", N20);
    printf("%d nota(s) de R$ 10.00\n", N10);
    printf("%d nota(s) de R$ 5.00\n", N5);
    printf("%d nota(s) de R$ 2.00\n", N2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", N1);
    printf("%d moeda(s) de R$ 0.50\n", N050);
    printf("%d moeda(s) de R$ 0.25\n", N025);
    printf("%d moeda(s) de R$ 0.10\n", N010);
    printf("%d moeda(s) de R$ 0.05\n", N005);
    printf("%d moeda(s) de R$ 0.01\n", N001);


}
