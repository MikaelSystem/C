#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

//Crie um menu de investimentos, onde o usuário fornece a taxa de rendimento, o tempo e o IR, em seguida, o rendimento bruto e líquido
//Por dia, mês e ano.

void cdb();
void lciLca();
void cambio();

int main(){

    int opcao, menu = true;

    while(menu){

        printf("|========HubInvest========|\n");
        printf("* [1] - CDB/CD\n");
        printf("* [2] - LCI/LCA\n");
        printf("* [3] - Conversão\n");
        printf("* [0] - Sair do Programa\n");
        printf("|=========================|\n");
            scanf("%d", &opcao);

            switch(opcao){
                case 1:
                menu = false;
                system("clear");
                    cdb();
                menu = true;
                break;

                case 2:
                menu = false;
                system("clear");
                    lciLca();
                menu = true;
                break;
               
                case 3:
                menu = false;
                system("clear");
                    cambio();
                menu = true;
                break;

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

    system("clear");

    while (cambio != 1 && cambio != 2){
        printf("Incorreto, digite 1 para Real ou 2 para Dólar; ");
            scanf("%d", &cambio);
           
            system("clear");

        if (cambio == 1){
            break;
        }
    }

    printf("Quanto pretende aportar?\n");
        scanf("%lf", &aporte);
        system("clear");
       
    printf("Qual é o rendimento deste investimento?\n");
        scanf("%lf", &rendimento);
        system("clear");
       
    printf("Qual é o imposto sobre o investimento?\n");
        scanf("%lf", &imposto);
        system("clear");

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

        printf("|-------------------------------|");
        printf("\n* Por dia, esse dinheiro renderá; \n~> Bruto: R$%.2f\n~> Líquido: R$%.2f\n", brutoDiario, liquidoDiario);
        printf("\n* Por Mês, esse dinheiro renderá; \n~> Bruto: R$%.2f\n~> Líquido: R$%.2f\n", brutoMensal, liquidoMensal);
        printf("\n* Por Ano, esse dinheiro renderá; \n~> Bruto: R$%.2f\n~> Líquido: R$%.2f\n", brutoAnual, liquidoAnual);
        printf("|-------------------------------|\n\n");
    }else {

        brutoAnual = brutoAnual * 51.4 / 100;
        brutoMensal = brutoMensal * 51.4 / 100;
        brutoDiario = brutoDiario * 51.4 / 100;

        liquidoAnual = liquidoAnual * 51.14 / 100;
        liquidoMensal = liquidoMensal * 51.14 / 100;
        liquidoDiario = liquidoDiario * 51.14 / 100;

        printf("|-------------------------------|");
        printf("\n* Por dia, esse dinheiro renderá; \n~> Bruto: U$%.2f\n~> Líquido: U$%.2f\n", brutoDiario, liquidoDiario);
        printf("\n* Por Mês, esse dinheiro renderá; \n~> Bruto: U$%.2f\n~> Líquido: U$%.2f\n", brutoMensal, liquidoMensal);
        printf("\n* Por Ano, esse dinheiro renderá; \n~> Bruto: U$%.2f\n~> Líquido: U$%.2f\n", brutoAnual, liquidoAnual);
        printf("|-------------------------------|\n\n");
    }
}

void lciLca(){
    float aporte, cdi;
    int opcao, dia, mes, ano, menu = 0;

    printf("Qual é o Aporte do seu investimento? ");
        scanf("%f", &aporte);
        system("clear");
       
    printf("Qual é a rentabilidade (CDI)? ");
        scanf("%f", &cdi);
        system("clear");
       
    printf("Qual o DIA do vencimento?\n ");
        scanf("%d", &dia);
        system("clear");
       
    printf("Qual o mês do vencimento?\n\n");

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
            mes = 0;
            break;

            case 2:
            mes = 1;
            break;

            case 3:
            mes = 2;
            break;

            case 4:
            mes = 3;
            break;

            case 5:
            mes = 4;
            break;

            case 6:
            mes = 5;
            break;

            case 7:
            mes = 6;
            break;

            case 8:
            mes = 7;
            break;

            case 0:
            system("clear");
            printf("[1] - Setembro\n");
                printf("[2] - Outubro\n");
                    printf("[3] - Novembro\n");
                        printf("[4] - Dezembro\n");
                            printf("[0] - << Página Anterior <<\n\n");
                            scanf("%d", &opcao);
                            system("clear");

                switch(opcao){
                    case 1:
                    mes = 8;
                    break;

                    case 2:
                    mes = 9;
                    break;

                    case 3:
                    mes = 10;
                    break;

                    case 4:
                    mes = 11;
                    break;

                    case 0:
                    menu = 0;
                    break;
                }

            break;
        }
    }
    system("clear");
        printf("Qual o ano do vencimento?\n ");
            scanf("%d", &ano);
    system("clear");
   
    time_t agora = time(NULL);
    struct tm dataInicio = *localtime(&agora);
   
    struct tm dataResgate = {0};
    dataResgate.tm_mday = dia;
    dataResgate.tm_mon = mes;
    dataResgate.tm_year = ano - 1900;
   
    time_t segInicio = mktime(&dataInicio);
    time_t segResgaste = mktime(&dataResgate);
   
    double diferencaSegundos = difftime(segResgaste, segInicio);
    long diasTotais = (long)(diferencaSegundos / 86400);
   
    double taxaDecimal = cdi / 100.0;
    double rendimento = aporte * (taxaDecimal * (diasTotais / 365.0));
   
    printf("\naté %d/%d/%d, seu investimento rentabilizará %.2fR$\n\n", dia, (mes + 1), ano, rendimento);

}

void cambio(){
    int opcao;
    bool menu = true;
    double dolar, real, moeda, valor;
   
    while (menu) {
        printf("|======Conversão=====|\n");
        printf("* [1] - Real para Dólar\n");
        printf("* [2] - Dólar para Real\n");
        printf("|====================|\n");
            scanf("%d",&opcao);
           
        system("clear");
        
        switch (opcao) {
            case 1:
                menu = false;
            printf("Quanto deseja converter? (R$ >> U$): \n");
                scanf("%lf", &moeda);
            printf("Qual o valor do Dólar? \n");
                scanf("%lf", &dolar);
                
            valor = moeda * dolar;
            
            system("clear");
            
            printf("|-----------------------------------------|\n");
            printf("[!] A conversão de R$ para U$ é de U$%.2f\n", valor);
            printf("|-----------------------------------------|\n\n");
            
            
            break;
            
            case 2:
                menu = false;
            printf("Quanto deseja converter? (U$ >> R$): \n");
                scanf("%lf", &moeda);
            printf("Qual o valor do Real? \n");
                scanf("%lf", &real);
                
            valor = moeda * real;
            
            system("clear");
            
            printf("A conversão de U$ para R$ é de R$%.2f\n\n", valor);
            break;
            
        }
    }
   
}






























