#include <stdio.h> 
#include <stdbool.h>

void lista();
void adicionarTarefas();
void marcarX();
void verificarTarefas();
void removerTarefas();
void atualizarTarefas();

int main () {
    int opcao, total = 0, concluidas[10] = {0};
    bool menu = true;
    char tarefas[10][100];
    
    while (menu){
        
        printf("|==========================|\n");
        printf("* [1] - Verificar Tarefas\n");
        printf("* [2] - Adicionar Tarefas\n");
        printf("* [3] - Marcar X\n");
        printf("* [4] - Remover Tarefas\n");
        printf("* [5] - Atualizar Tarefas\n");
        printf("* [0] - Sair do Programa\n");
        printf("|==========================|\n");
            scanf("%d", &opcao); 
            
        switch (opcao){
            case 1:
            menu = false;
                lista(tarefas, concluidas,total);
            menu = true;
                break;
            
            case 2:
            menu = false;
                adicionarTarefas(tarefas, &total);
            menu = true;
                break;
                
            case 3:
            menu = false;
                marcarX(tarefas, concluidas,total);
            menu = true;
                break;
                
            case 4:
            menu = false;
                removerTarefas();
            menu = true;
                break;
                
            case 5:
            menu = false;
                atualizarTarefas();
            menu = true;
                break;
                
            case 0:
            menu = false;
            break;
        }
    }
    return 0;
}

void lista(char tarefas[10][100], int concluidas[10], int total){
    int opcao;
    
        printf("|====Tarefas====|\n");
        
        if (total == 0) {
            printf("* Nenhuma tarefa cadastrada!\n");
        }
        
        else {
            
            for (int i=0; i < total ; i++){
                if (concluidas[i] == 1){
                    printf(" [X] ");
                }else {
                    printf(" [ ] ");
                }
                printf("%d - %s\n",i+1,tarefas[i]);
            }
            
        }
        
        printf("|===============|\n\n");
    
}

void adicionarTarefas(char tarefas[10][100], int *total){
    bool menu = true;
    
    while (menu){
        printf("Digite a tarefa que deseja adicionar: \n");
            scanf(" %[^\n]", tarefas[*total]);
        (*total)++;  
        
        menu = false;
    }
    
}

void marcarX(char tarefas[10][100], int concluidas[10],int total){
    bool menu = true;
    int opcao;

    if (total == 0){
        
        printf("|====Tarefas====|\n");
        printf("* Não há nada para marcar!");
        printf("|===============|\n\n");
        
    } else {
        while (menu) {
            
            for (int i=0; i < total ; i++) {
                printf("%d-%s\n",i+1,tarefas[i]);
            }
            printf("Qual você deseja marcar?\n");
                scanf("%d", &opcao);
                
                concluidas[opcao - 1] == 1;
                
            break;
        }
    }
        
  
    
}

void removerTarefas(){}
void atualizarTarefas(){}




    
    
