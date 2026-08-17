#include <stdio.h>
#include <string.h>

int main() {
    char palavra[15], palavra2[15], palavra3[15];

    scanf("%14s", palavra);
    scanf("%14s", palavra2);
    scanf("%14s", palavra3);

    if (strcmp(palavra, "vertebrado") == 0) { 
        if (strcmp(palavra2, "ave") == 0){
            if (strcmp(palavra3, "carnivoro") == 0){
                printf("aguia\n");
            }
            else if (strcmp(palavra3, "onivoro") == 0){
                printf("pomba\n");
            }
        }

        else if (strcmp(palavra2, "mamifero") == 0){
            if (strcmp(palavra3, "onivoro") == 0){
                printf("homem\n");
            }
            else if (strcmp(palavra3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(palavra, "invertebrado") == 0){
        if (strcmp(palavra2, "inseto") == 0){
            if (strcmp(palavra3, "hematofago") == 0){
                printf("pulga\n");
            }
            else if (strcmp(palavra3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        else if (strcmp(palavra2, "anelideo") == 0){
            if (strcmp(palavra3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            else if (strcmp(palavra3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }
}


