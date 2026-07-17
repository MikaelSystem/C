#include <stdio.h>
#include <stdbool.h>

//Crie um menu de investimentos, onde o usuário fornece a taxa de rendimento, o tempo e o IR, em seguida, o rendimento bruto e líquido
//Por dia, mês e ano.

void cdb();

int main(){
    
    int opcao, menu = true;
    
    while(menu){
        
        printf("=========================\n");
        printf("[1] - CDB\n");
        printf("[5] - Sair do Programa\n");
        printf("=========================\n");  
            scanf("%d", &opcao);
            
            switch(opcao){
                case 1:
                menu = false;
                cdb();
                menu = true;
                break;
                
                case 5:
                menu = false;
                break;
            }
    }
    return 0;
}

void cdb(){
    int cambio;
    double rendimento, aporte, imposto;
    
    printf("Digite 1 para Real, 2 para Dólar; \n");
        scanf("%d", &cambio);
        
        if (cambio != 1 && cambio != 2){
            printf("Incorreto, digite 1 para Real ou 2 para Dólar; ");
        }
        
    printf("Quanto pretende aportar?\n");
        scanf("%lf", &aporte);
    printf("Qual é o rendimento deste investimento?\n");
        scanf("%lf", &rendimento);
    printf("Qual é o imposto sobre o investimento?\n");
        scanf("%lf", &imposto);
        
    double taxaAnual = rendimento / 100.0;
    double taxaMensal = taxaAnual / 12.0;
    double taxaDiaria = taxaAnual / 360.0;
    double aliquota = imposto / 100.0;
    
    double brutoAnual = aporte * taxaAnual;
    double brutoMensal = aporte * taxaMensal;
    double brutoDiario = aporte * taxaDiaria;
    
    double liquidoAnual = brutoAnual - (aporte * (taxaAnual * aliquota * 1.0));
    double liquidoMensal = brutoMensal - (aporte * (taxaMensal * aliquota * 1.0));
    double liquidoDiario = brutoDiario - (aporte * (taxaDiaria * aliquota * 1.0));
    
    printf("--------------------------------------------------------------------------");
    printf("\nPor dia, esse dinheiro renderá; \nBruto: %.2f\nLíquido: %.2f\n", brutoDiario, liquidoDiario);
    printf("\nPor Mês, esse dinheiro renderá; \nBruto: %.2f\nLíquido: %.2f\n", brutoMensal, liquidoMensal);
    printf("\nPor Ano, esse dinheiro renderá; \nBruto: %.2f\nLíquido: %.2f\n", brutoAnual, liquidoAnual);
    printf("--------------------------------------------------------------------------\n\n");
    
    
    
    
    
}








