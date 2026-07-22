#include <stdio.h> 
#include <stdbool.h>

void adicionarTarefas();
void marcarX();
void verificarTarefas();
void removerTarefas();
void atualizarTarefas();

int main () {
    int opcao;
    bool menu = true;
    
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
                adicionarTarefas();
            menu = true;
                break;
            
            case 2:
            menu = false;
                marcarX();
            menu = true;
                break;
                
            case 3:
            menu = false;
                verificarTarefas();
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

void adicionarTarefas(){}


    
    
