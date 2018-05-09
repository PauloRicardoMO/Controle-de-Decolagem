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
    Aviao *lista = NULL, *inicioFila = NULL, *fimFila = NULL, *tmp = NULL;

    do{
        system("cls");
        printf("1 - Inserir aviao no patio");
        printf("\n2 - Numero de avioes a espera de decolar");
        printf("\n3 - Decolagem de um aviao");
        printf("\n4 - Entrada de um novo aviao para decolar");
        printf("\n5 - Listar todos os avioes a espera de decolar");
        printf("\n6 - Listar as características do proximo aviao a decolar");
        printf("\n0 - Sair\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                system("cls");
                lista = insereAviaoLista(&lista);
                system("pause");
                break;
            case 2:
                system("cls");
                printf("Existem %d avioes esperando para decolar\n\n", qtdAvioesNaFila(&inicioFila, &fimFila));
                system("pause");
                break;
            case 3:
                system("cls");
                tmp = decolar(&inicioFila);
                if(tmp != NULL){
                    printf("Aviao %d decolou\n", tmp->codigo);
                    free(tmp);
                }else printf("\n\nNenhum Aviao para decolar\n\n");
                system("pause");
                break;
            case 4:
                system("cls");
                tmp = buscarAviao(lista);
                if(tmp != NULL){
                    inserirNaFilaDecolagem(&inicioFila, &fimFila, tmp);
                }else printf("\n\nNenhum aviao encontrado\n\n");
                //lista = excluirAviao(&lista, tmp);
                system("pause");
                break;
            case 5:
                system("cls");
                printf("LISTA DE DECOLAGEM\n");
                listarFilaDeDecolagem(&inicioFila, &fimFila);
                system("pause");
                break;
            case 6:
                system("cls");
                printf("PROXIMO AVIAO A DECOLAR\n");
                listarProximoADecolar(&inicioFila, &fimFila);
                printf("\n\n");
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

