#include <stdio.h>
 
int main() {
    char nome[10];
    double salario, vendas, comissao, total;
  
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
  
    comissao = vendas * 0.15;
    total = comissao + salario;
  
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
