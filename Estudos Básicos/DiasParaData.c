#include <stdio.h>

int main() {
    int idade=0, dias=0, meses=0, anos=0;
    
    scanf("%d", &idade);
    
    for (int i=0; idade != 0; i++){
        
        if  (idade > 365){
            anos = idade / 365;
            idade = idade % 365; 
        }
        else if (idade <= 365 && idade >= 30){
            meses = idade / 30;
            idade = idade % 30;
        }
        else if (idade < 30){
            dias = idade;
            idade = idade % idade;
        }
        
    }
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    
    return 0;
}
