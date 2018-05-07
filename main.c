#include "lista.c"
#include "fila.c"

/** \brief Função principal do sistema
 * \author Paulo Ricardo
 * \return	Return 0 se funcionar corretamente sem interrupçoes.
 *
 * Função principal contendo o menu principal com as funcionalidades requeridas
 */
int main(){
    int op, n;
    Aviao *lista, *fila;

    do{
        system("cls");
        printf("1 - Numero de aviões a espera de decolar");
        printf("\n2 - Decolagem de um avião");
        printf("\n3 - Entrada de um novo avião para decolar");
        printf("\n4 - Listar todos os aviões a espera de decolar");
        printf("\n5 - Listar as características do próximo avião a decolar");
        printf("\n0 - Sair\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                /** \TODO chamar metodo contarFilaDecolagem*/
                break;
            case 2:
                system("cls");
                /** \TODO chamar metodo contarFilaDecolagem*/
                break;
            case 3:
                system("cls");
                imprimirLista(lista);
                system("pause");
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("\nOpcaoo invalida\n");
                system("pause");
        }
    }while(op != 0);
    return 0;
}

