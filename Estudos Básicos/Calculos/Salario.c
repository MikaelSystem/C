#include <stdio.h>
 
int main() {
    double SALARY, VALORHORA;
    int NUMBER, HORAS;
    
    scanf("%d", &NUMBER);
    scanf("%d", &HORAS);
    scanf("%lf", &VALORHORA);
    
    SALARY = HORAS * VALORHORA;
    
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2lf\n", SALARY);
 
    return 0;
}
