#include <stdio.h>

void math(int num,int num2){
    int sum;
    sum = num + num2;
    printf("O resultado da conta é; %d", sum);
}

int main(){
    int num, num2, res;
    
    printf("Digite o primeiro valor\n");
    scanf("%d", &num);
    printf("Digite o segundo valor\n");
    scanf("%d", &num2);
    
    math(num,num2);
    
    return 0;
}
