#include <stdio.h>
#include <stdbool.h>
#include <time.h>

//Crie um menu de investimentos, onde o usuário fornece a taxa de rendimento, o tempo e o IR, em seguida, o rendimento bruto e líquido
//Por dia, mês e ano.

void cdb();
void lciLca();

int main(){
    
    int opcao, menu = true;
    
    while(menu){
        
        printf("=========================\n");
        printf("[1] - CDB/CD\n");
        printf("[2] - LCI/LCA\n");
        printf("[3] - \n");
        printf("[4] - Data atual\n");
        printf("[0] - Sair do Programa\n");
        printf("=========================\n");  
            scanf("%d", &opcao);
            
            switch(opcao){
                case 1:
                menu = false;
                    cdb();
                menu = true;
                break;
                
                case 2:
                menu = false;
                    lciLca();
                menu = true;
                
                case 4:
                    
                    break;
                    
                case 0:
                menu = false;
                break;
            }
    }
    return 0;
}

void cdb(){
    int cambio = 0;
    double rendimento, aporte, imposto;
    
    printf("Digite 1 para Real, 2 para Dólar; \n");
        scanf("%d", &cambio);
        
            
    while (cambio != 1 && cambio != 2){
        printf("Incorreto, digite 1 para Real ou 2 para Dólar; ");
            scanf("%d", &cambio);
            
        if (cambio == 1){
            break;
        }
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
    
 
    if (cambio == 1) {
        
        printf("-------------------------------------");
        printf("\nPor dia, esse dinheiro renderá; \nBruto: R$%.2f\nLíquido: R$%.2f\n", brutoDiario, liquidoDiario);
        printf("\nPor Mês, esse dinheiro renderá; \nBruto: R$%.2f\nLíquido: R$%.2f\n", brutoMensal, liquidoMensal);
        printf("\nPor Ano, esse dinheiro renderá; \nBruto: R$%.2f\nLíquido: R$%.2f\n", brutoAnual, liquidoAnual);
        printf("-------------------------------------\n\n"); 
    }else {
        
        brutoAnual = brutoAnual * 51.4 / 100;
        brutoMensal = brutoMensal * 51.4 / 100;
        brutoDiario = brutoDiario * 51.4 / 100;
        
        liquidoAnual = liquidoAnual * 51.14 / 100;
        liquidoMensal = liquidoMensal * 51.14 / 100;
        liquidoDiario = liquidoDiario * 51.14 / 100;
        
        printf("-------------------------------------");
        printf("\nPor dia, esse dinheiro renderá; \nBruto: U$%.2f\nLíquido: U$%.2f\n", brutoDiario, liquidoDiario);
        printf("\nPor Mês, esse dinheiro renderá; \nBruto: U$%.2f\nLíquido: U$%.2f\n", brutoMensal, liquidoMensal);
        printf("\nPor Ano, esse dinheiro renderá; \nBruto: U$%.2f\nLíquido: U$%.2f\n", brutoAnual, liquidoAnual);
        printf("-------------------------------------\n\n");
    }
}

void lciLca(){
    float aporte, cdi;
    int opcao, dia, mes, ano, menu = 0;
    
    printf("Qual é o Aporte do seu investimento? ");
        scanf("%d", &aporte);
    printf("Qual é a rentabilidade (CDI)? ");
        scanf("%d", &cdi);
        
    printf("Digite o Vencimento do seu LCI/LCA; \nQual o dia? ");
        scanf("%d", &dia);
    printf("Qual o mês?\n\n");
    
    while (menu == 0){
        
        printf("[1] - Janeiro\n");
        printf("[2] - Fevereiro\n");
        printf("[3] - Março\n");
        printf("[4] - Abril\n");
        printf("[5] - Maio\n");
        printf("[6] - Junho\n");
        printf("[7] - Julho\n");
        printf("[8] - Agosto\n");
        printf("[0] - >> Próxima Página >>\n\n");
            scanf("%d", &opcao);
        
        while (opcao < 0 || opcao > 8){
            printf("Opção inválida, tente novamente: \n");
                scanf("%d", &opcao);
        } 
        
        if (opcao >=0 && opcao <=8){
            menu = 1;
        }
    
        switch (opcao) {
           
            
            case 1:
            mes = 1;
            break;
            
            case 2:
            mes = 2;
            break;
            
            case 3:
            mes = 3;
            break;
            
            case 4:
            mes = 4;
            break;
            
            case 5:
            mes = 5;
            break;
            
            case 6:
            mes = 6;
            break;
            
            case 7:
            mes = 7;
            break;
            
            case 8:
            mes = 8;
            break;
            
            case 0:
            printf("[1] - Setembro\n");
                printf("[2] - Outubro\n");
                    printf("[3] - Novembro\n");
                        printf("[4] - Dezembro\n");
                            printf("[0] - << Página Anterior <<\n\n");
                            scanf("%d", &opcao);
                            
                switch(opcao){
                    case 1:
                    mes = 9;
                    break;
                    
                    case 2:
                    mes = 10;
                    break;
                    
                    case 3:
                    mes = 11;
                    break;
                    
                    case 4:
                    mes = 12;
                    break;
                    
                    case 0:
                    menu = 0;
                    break;
                } 
                            
            break;
        }
    }        
    printf("Digite o Vencimento do seu LCI/LCA; \nQual o ano? ");
        scanf("%d", &ano);
        
    double rentabilidade = cdi / 100;
    double capital = rentabilidade * aporte;
        
    printf("Em %d meses, seu investimento rentabilizará %dR$");
        
}   








